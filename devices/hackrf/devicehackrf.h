///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2017 Edouard Griffiths, F4EXB                                   //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef DEVICES_HACKRF_DEVICEHACKRF_H_
#define DEVICES_HACKRF_DEVICEHACKRF_H_

#include "libhackrf/hackrf.h"

#include "export.h"

class DEVICES_API DeviceHackRF
{
public:
    static DeviceHackRF& instance();
    static hackrf_device *open_hackrf(int sequence);
    static hackrf_device *open_hackrf(const char * const serial);
protected:
    DeviceHackRF();
    DeviceHackRF(const DeviceHackRF&) {}
    DeviceHackRF& operator=(const DeviceHackRF& other __attribute__((unused))) { return *this; }
    ~DeviceHackRF();
private:
    static hackrf_device *open_hackrf_from_sequence(int sequence);
};



#endif /* DEVICES_HACKRF_DEVICEHACKRF_H_ */
