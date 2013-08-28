
/******************************************************************************\
                     This file is part of Folding Atomata,
          a program that displays 3D views of Folding@home proteins.

                      Copyright (c) 2013, Jesse Victors

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see http://www.gnu.org/licenses/

                For information regarding this software email:
                                Jesse Victors
                         jvictors@jessevictors.com
\******************************************************************************/

#include "Trajectory.hpp"


Trajectory::Trajectory(const std::shared_ptr<Topology> topology) :
    topology_(topology)
{}



std::shared_ptr<Topology> Trajectory::getTopology()
{
    return topology_;
}



void Trajectory::addSnapshot(const SnapshotPtr& newSnapshot)
{
    snapshots_.push_back(newSnapshot);
}



SnapshotPtr Trajectory::getSnapshot(int index)
{
    return snapshots_[(std::size_t)index];
}



int Trajectory::countSnapshots()
{
    return (int)snapshots_.size();
}
