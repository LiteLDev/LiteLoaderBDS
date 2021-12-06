// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "StructurePiece.hpp"
#define EXTRA_INCLUDE_PART_RUINEDPORTALPIECE
#include "Extra/RuinedPortalPieceAPI.hpp"
#undef EXTRA_INCLUDE_PART_RUINEDPORTALPIECE
class RuinedPortalPiece : public StructurePiece {
#include "Extra/RuinedPortalPieceAPI.hpp"
public:
    /*0*/ virtual ~RuinedPortalPiece();
    /*1*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*7*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;


protected:

private:
    MCAPI void _addNetherrackDripColumn(class Random&, class BlockSource&, class BlockPos);
    MCAPI void _maybeReplaceBlock(class Random&, class BlockSource&, class BlockPos);
    MCAPI void _maybeReplaceFullStoneBlock(class Random&, class BlockSource&, class BlockPos, class Block const&);
    MCAPI void _maybeReplaceStairs(class Random&, class BlockSource&, class BlockPos);
    MCAPI void _moveStructureBoundsToSuitableY(class Random&, class BlockSource&);
    MCAPI void _spreadNetherrack(class Random&, class BlockSource&);
    MCAPI static class Block const& _getRandomFacingStairs(class Random&, class Block const&);
    MCAPI static bool _willLavaFlowIn(class BlockSource&, class BlockPos);
};