
#ifndef SNAPSHOT_HPP
#define SNAPSHOT_HPP

#include "glm/glm.hpp"
#include <vector>
#include <memory>

class Snapshot
{
    private:
        std::vector<glm::vec3> positions_;
};

typedef std::shared_ptr<Snapshot> SnapshotPtr;

#endif