// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_IFILECHUNKUPLOADER
#include "Extra/IFileChunkUploaderAPI.hpp"
#undef EXTRA_INCLUDE_PART_IFILECHUNKUPLOADER
class IFileChunkUploader {
#include "Extra/IFileChunkUploaderAPI.hpp"
public:
    /*0*/ virtual ~IFileChunkUploader();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void initFileUploader(std::string const&, struct FileInfo const&, int, class Json::Value const&, class std::function<void (bool)>) = 0;
    /*3*/ virtual void getServerMissingChunks(struct FileInfo const&, class std::function<void (std::vector<struct FileChunkInfo>)>) const;
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void uploadChunk(struct FileInfo const&, struct FileChunkInfo const&, std::vector<unsigned char> const&, class std::function<void (bool)>);
    /*6*/ virtual void uploadStream(struct FileInfo const&, unsigned __int64, std::string const&, class std::function<void (int /*enum enum IFileChunkUploader::UploadStreamResult*/)>);
    /*7*/ virtual bool canCancelUpload(struct FileInfo const&) const = 0;
    /*8*/ virtual void __unk_vfn_2() = 0;
    /*9*/ virtual int /*enum enum UploadError*/ getInitErrorCode() const = 0;
    /*10*/ virtual float getUploadProgress(struct FileInfo const&) const = 0;
    /*11*/ virtual struct FileChunkInfo getChunkInfo(struct FileInfo const&, int) const;
    /*
    inline void confirmChunkReceived(struct FileInfo const& a0, struct FileChunkInfo const& a1){
        void (IFileChunkUploader::*rv)(struct FileInfo const&, struct FileChunkInfo const&);
        *((void**)&rv) = dlsym("?confirmChunkReceived@IFileChunkUploader@@UEAAXAEBUFileInfo@@AEBUFileChunkInfo@@@Z");
        return (this->*rv)(std::forward<struct FileInfo const&>(a0), std::forward<struct FileChunkInfo const&>(a1));
    }
    inline void update(){
        void (IFileChunkUploader::*rv)();
        *((void**)&rv) = dlsym("?update@IFileChunkUploader@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};