﻿/***************************************************************************
 *   Copyright (C) 2008 by Lothar May                                      *
 *                                                                         *
 *   This file is part of pokerth_console.                                 *
 *   pokerth_console is free software: you can redistribute it and/or      *
 *   modify it under the terms of the GNU Affero General Public License    *
 *   as published by the Free Software Foundation, either version 3 of     *
 *   the License, or (at your option) any later version.                   *
 *                                                                         *
 *   pokerth_console is distributed in the hope that it will be useful,    *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the                                *
 *   GNU Affero General Public License along with pokerth_console.         *
 *   If not, see <http://www.gnu.org/licenses/>.                           *
 ***************************************************************************/

using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;

namespace pokerth_console
{
	class Program
	{
		static int Main(string[] args)
		{
			Settings settings = new Settings();
			PokerTHData data = new PokerTHData();
			Client client = new Client(settings, data);
			client.Connect();
			client.Start();
			Thread.Sleep(5000);
			Console.WriteLine("Open Games:");
			Console.Write(data.GameList.ToString());
			Console.WriteLine();
			Console.WriteLine("Enter game id");
			string input = Console.ReadLine();
			uint gameId = Convert.ToUInt32(input);
			client.JoinGame(gameId);
			Thread.Sleep(5000000);
			client.SetTerminateFlag();
			client.WaitTermination();
			return 0;
		}
	}
}