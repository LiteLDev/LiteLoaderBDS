// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ChunkSource.hpp"
#define EXTRA_INCLUDE_PART_NETWORKCHUNKSOURCE
#include "Extra/NetworkChunkSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_NETWORKCHUNKSOURCE
class NetworkChunkSource : public ChunkSource {
#include "Extra/NetworkChunkSourceAPI.hpp"
public:
    /*0*/ virtual ~NetworkChunkSource();
    /*1*/ virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);
    /*2*/ virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);
    /*3*/ virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const&, int /*enum enum ChunkSource::LoadMode*/, bool);
    /*4*/ virtual class std::shared_ptr<class LevelChunk> getOrLoadChunk(class ChunkPos const&, int /*enum enum ChunkSource::LoadMode*/, bool);
    /*5*/ virtual bool postProcess(class ChunkViewSource&);
    /*6*/ virtual void checkAndReplaceChunk(class ChunkViewSource&, class LevelChunk&);
    /*7*/ virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /*8*/ virtual bool isWithinWorldLimit(class ChunkPos const&) const;
    /*9*/ virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk> > > > const* getChunkMap();
    /*10*/ virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk> > > > const& getStorage() const;
    /*11*/ virtual void clearDeletedEntities();
    /*12*/ virtual bool canCreateViews() const;


protected:

private:
};