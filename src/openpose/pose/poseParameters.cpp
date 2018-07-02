#include <openpose/pose/poseParametersRender.hpp>
#include <openpose/pose/poseParameters.hpp>

namespace op
{
    // Body parts mapping
    const std::map<unsigned int, std::string> POSE_BODY_25_BODY_PARTS {
        {0,  "Nose"},
        {1,  "Neck"},
        {2,  "RShoulder"},
        {3,  "RElbow"},
        {4,  "RWrist"},
        {5,  "LShoulder"},
        {6,  "LElbow"},
        {7,  "LWrist"},
        {8,  "MidHip"},
        {9,  "RHip"},
        {10, "RKnee"},
        {11, "RAnkle"},
        {12, "LHip"},
        {13, "LKnee"},
        {14, "LAnkle"},
        {15, "REye"},
        {16, "LEye"},
        {17, "REar"},
        {18, "LEar"},
        {19, "LBigToe"},
        {20, "LSmallToe"},
        {21, "LHeel"},
        {22, "RBigToe"},
        {23, "RSmallToe"},
        {24, "RHeel"},
        {25, "Background"}
    };
    const std::map<unsigned int, std::string> POSE_COCO_BODY_PARTS {
        {0,  "Nose"},
        {1,  "Neck"},
        {2,  "RShoulder"},
        {3,  "RElbow"},
        {4,  "RWrist"},
        {5,  "LShoulder"},
        {6,  "LElbow"},
        {7,  "LWrist"},
        {8,  "RHip"},
        {9,  "RKnee"},
        {10, "RAnkle"},
        {11, "LHip"},
        {12, "LKnee"},
        {13, "LAnkle"},
        {14, "REye"},
        {15, "LEye"},
        {16, "REar"},
        {17, "LEar"},
        {18, "Background"}
    };
    const std::map<unsigned int, std::string> POSE_MPI_BODY_PARTS {
        {0,  "Head"},
        {1,  "Neck"},
        {2,  "RShoulder"},
        {3,  "RElbow"},
        {4,  "RWrist"},
        {5,  "LShoulder"},
        {6,  "LElbow"},
        {7,  "LWrist"},
        {8,  "RHip"},
        {9,  "RKnee"},
        {10, "RAnkle"},
        {11, "LHip"},
        {12, "LKnee"},
        {13, "LAnkle"},
        {14, "Chest"},
        {15, "Background"}
    };
    const std::map<unsigned int, std::string> POSE_BODY_19_BODY_PARTS {
        {0,  "Nose"},
        {1,  "Neck"},
        {2,  "RShoulder"},
        {3,  "RElbow"},
        {4,  "RWrist"},
        {5,  "LShoulder"},
        {6,  "LElbow"},
        {7,  "LWrist"},
        {8,  "MidHip"},
        {9,  "RHip"},
        {10, "RKnee"},
        {11, "RAnkle"},
        {12, "LHip"},
        {13, "LKnee"},
        {14, "LAnkle"},
        {15, "REye"},
        {16, "LEye"},
        {17, "REar"},
        {18, "LEar"},
        {19, "Background"}
    };
    const std::map<unsigned int, std::string> POSE_BODY_59_BODY_PARTS {
        // Body
        {0,  "Nose"},
        {1,  "Neck"},
        {2,  "RShoulder"},
        {3,  "RElbow"},
        {4,  "RWrist"},
        {5,  "LShoulder"},
        {6,  "LElbow"},
        {7,  "LWrist"},
        {8,  "MidHip"},
        {9,  "RHip"},
        {10, "RKnee"},
        {11, "RAnkle"},
        {12, "LHip"},
        {13, "LKnee"},
        {14, "LAnkle"},
        {15, "REye"},
        {16, "LEye"},
        {17, "REar"},
        {18, "LEar"},
        // Left hand
        {19, "LThumb1CMC"},         {20, "LThumb2Knuckles"},{21, "LThumb3IP"},  {22, "LThumb4FingerTip"},
        {23, "LIndex1Knuckles"},    {24, "LIndex2PIP"},     {25, "LIndex3DIP"}, {26, "LIndex4FingerTip"},
        {27, "LMiddle1Knuckles"},   {28, "LMiddle2PIP"},    {29, "LMiddle3DIP"},{30, "LMiddle4FingerTip"},
        {31, "LRing1Knuckles"},     {32, "LRing2PIP"},      {33, "LRing3DIP"},  {34, "LRing4FingerTip"},
        {35, "LPinky1Knuckles"},    {36, "LPinky2PIP"},     {37, "LPinky3DIP"}, {38, "LPinky4FingerTip"},
        // Right hand
        {39, "RThumb1CMC"},         {40, "RThumb2Knuckles"},{41, "RThumb3IP"},  {42, "RThumb4FingerTip"},
        {43, "RIndex1Knuckles"},    {44, "RIndex2PIP"},     {45, "RIndex3DIP"}, {46, "RIndex4FingerTip"},
        {47, "RMiddle1Knuckles"},   {48, "RMiddle2PIP"},    {49, "RMiddle3DIP"},{50, "RMiddle4FingerTip"},
        {51, "RRing1Knuckles"},     {52, "RRing2PIP"},      {53, "RRing3DIP"},  {54, "RRing4FingerTip"},
        {55, "RPinky1Knuckles"},    {56, "RPinky2PIP"},     {57, "RPinky3DIP"}, {58, "RPinky4FingerTip"},
        // Background
        {59, "Background"},
    };
    const std::map<unsigned int, std::string> POSE_BODY_65_BODY_PARTS {
        // Body
        {0,  "Nose"},
        {1,  "Neck"},
        {2,  "RShoulder"},
        {3,  "RElbow"},
        {4,  "RWrist"},
        {5,  "LShoulder"},
        {6,  "LElbow"},
        {7,  "LWrist"},
        {8,  "MidHip"},
        {9,  "RHip"},
        {10, "RKnee"},
        {11, "RAnkle"},
        {12, "LHip"},
        {13, "LKnee"},
        {14, "LAnkle"},
        {15, "REye"},
        {16, "LEye"},
        {17, "REar"},
        {18, "LEar"},
        {19, "LBigToe"},
        {20, "LSmallToe"},
        {21, "LHeel"},
        {22, "RBigToe"},
        {23, "RSmallToe"},
        {24, "RHeel"},
        // Left hand
        {25, "LThumb1CMC"},         {26, "LThumb2Knuckles"},{27, "LThumb3IP"},  {28, "LThumb4FingerTip"},
        {29, "LIndex1Knuckles"},    {30, "LIndex2PIP"},     {31, "LIndex3DIP"}, {32, "LIndex4FingerTip"},
        {33, "LMiddle1Knuckles"},   {34, "LMiddle2PIP"},    {35, "LMiddle3DIP"},{36, "LMiddle4FingerTip"},
        {37, "LRing1Knuckles"},     {38, "LRing2PIP"},      {39, "LRing3DIP"},  {40, "LRing4FingerTip"},
        {41, "LPinky1Knuckles"},    {42, "LPinky2PIP"},     {43, "LPinky3DIP"}, {44, "LPinky4FingerTip"},
        // Right hand
        {45, "RThumb1CMC"},         {46, "RThumb2Knuckles"},{47, "RThumb3IP"},  {48, "RThumb4FingerTip"},
        {49, "RIndex1Knuckles"},    {50, "RIndex2PIP"},     {51, "RIndex3DIP"}, {52, "RIndex4FingerTip"},
        {53, "RMiddle1Knuckles"},   {54, "RMiddle2PIP"},    {55, "RMiddle3DIP"},{56, "RMiddle4FingerTip"},
        {57, "RRing1Knuckles"},     {58, "RRing2PIP"},      {59, "RRing3DIP"},  {60, "RRing4FingerTip"},
        {61, "RPinky1Knuckles"},    {62, "RPinky2PIP"},     {63, "RPinky3DIP"}, {64, "RPinky4FingerTip"},
        // Background
        {65, "Background"},
    };
    // Hand legend:
    //     - Thumb:
    //         - Carpometacarpal Joints (CMC)
    //         - Interphalangeal Joints (IP)
    //     - Other fingers:
    //         - Knuckles or Metacarpophalangeal Joints (MCP)
    //         - PIP (Proximal Interphalangeal Joints)
    //         - DIP (Distal Interphalangeal Joints)
    //     - All fingers:
    //         - Fingertips
    // More information: Page 6 of http://www.mccc.edu/~behrensb/documents/TheHandbig.pdf
    const std::map<unsigned int, std::string> POSE_CAR_12_PARTS {
        {0,  "FRWheel"},
        {1,  "FLWheel"},
        {2,  "BRWheel"},
        {3,  "BLWheel"},
        {4,  "FRLight"},
        {5,  "FLLight"},
        {6,  "BRLight"},
        {7,  "BLLight"},
        {8,  "FRTop"},
        {9,  "FLTop"},
        {10, "BRTop"},
        {11, "BLTop"},
        {12, "Background"},
    };
    const std::array<std::vector<unsigned int>, (int)PoseModel::Size> POSE_MAP_INDEX{
        // BODY_25
        std::vector<unsigned int>{
            0,1, 14,15, 22,23, 16,17, 18,19, 24,25, 26,27, 6,7, 2,3, 4,5, 8,9, 10,11, 12,13, 30,31, 32,33, 36,37, 34,35, 38,39, 20,21, 28,29, 40,41,42,43,44,45, 46,47,48,49,50,51
        },
        // COCO
        std::vector<unsigned int>{
            12,13, 20,21, 14,15, 16,17, 22,23, 24,25, 0,1, 2,3, 4,5, 6,7, 8,9, 10,11, 28,29, 30,31, 34,35, 32,33, 36,37, 18,19, 26,27
        },
        // MPI_15
        std::vector<unsigned int>{
            0,1, 2,3, 4,5, 6,7, 8,9, 10,11, 12,13, 14,15, 16,17, 18,19, 20,21, 22,23, 24,25, 26,27
        },
        // MPI_15_4
        std::vector<unsigned int>{
            0,1, 2,3, 4,5, 6,7, 8,9, 10,11, 12,13, 14,15, 16,17, 18,19, 20,21, 22,23, 24,25, 26,27
        },
        // BODY_19
        std::vector<unsigned int>{
            0,1, 14,15, 22,23, 16,17, 18,19, 24,25, 26,27, 6,7, 2,3, 4,5, 8,9, 10,11, 12,13, 30,31, 32,33, 36,37, 34,35, 38,39, 20,21, 28,29
        },
        // BODY_19_X2
        std::vector<unsigned int>{
            0,1, 14,15, 22,23, 16,17, 18,19, 24,25, 26,27, 6,7, 2,3, 4,5, 8,9, 10,11, 12,13, 30,31, 32,33, 36,37, 34,35, 38,39, 20,21, 28,29
        },
        // BODY_59
        std::vector<unsigned int>{
            0,1, 14,15, 22,23, 16,17, 18,19, 24,25, 26,27, 6,7, 2,3, 4,5, 8,9, 10,11, 12,13, 30,31, 32,33, 36,37, 34,35, 38,39, 20,21, 28,29, // Body
            40,41, 42,43, 44,45, 46,47, 48,49, 14,51, 52,53, 54,55, 56,57, 58,59,
            60,61, 62,63, 64,65, 66,67, 68,69, 70,71, 72,73, 74,75, 76,77, 78,79,// Left hand
            80,81, 82,83, 84,85, 86,87, 88,89, 90,91, 92,93, 94,95, 96,97, 98,99,
            100,101, 102,103, 104,105, 106,107, 108,109, 110,111, 112,113, 114,115, 116,117, 118,119 // Right hand
        },
        // BODY_19N
        std::vector<unsigned int>{
            0,1, 14,15, 22,23, 16,17, 18,19, 24,25, 26,27, 6,7, 2,3, 4,5, 8,9, 10,11, 12,13, 30,31, 32,33, 36,37, 34,35, 38,39, 20,21, 28,29
        },
        // BODY_25E
        std::vector<unsigned int>{
            0,1, 14,15, 20,21, 16,17, 18,19, 22,23, 24,25, 6,7, 2,3, 4,5, 8,9, 10,11, 12,13, 26,27, 28,29, 32,33, 30,31, 34,35, 36,37,38,39,40,41, 42,43,44,45,46,47,
            48,49,50,51,52,53,54,55,56,57, 58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87
        },
        // BODY_25_19
        std::vector<unsigned int>{
            0,1, 14,15, 22,23, 16,17, 18,19, 24,25, 26,27, 6,7, 2,3, 4,5, 8,9, 10,11, 12,13, 30,31, 32,33, 36,37, 34,35, 38,39, 20,21, 28,29, 40,41,42,43,44,45, 46,47,48,49,50,51
        },
        // BODY_65
        std::vector<unsigned int>{
            0,1, 14,15, 22,23, 16,17, 18,19, 24,25, 26,27, 6,7, 2,3, 4,5, 8,9, 10,11, 12,13, 30,31, 32,33, 36,37, 34,35, 38,39, 20,21, 28,29, 40,41,42,43,44,45, 46,47,48,49,50,51, // Body
            52,53, 54,55, 56,57, 58,59, 60,61, 62,63, 64,65, 66,67, 68,69, 70,71,
            72,73, 74,75, 76,77, 78,79, 80,81, 82,83, 84,85, 86,87, 88,89, 90,91,                                                                                                   // Left hand
            92,93, 94,95, 96,97, 98,99, 100,101, 102,103, 104,105, 106,107, 108,109, 110,111,
            112,113, 114,115, 116,117, 118,119, 120,121, 122,123, 124,125, 126,127, 128,129, 130,131                                                                                // Right hand
        },
        // CAR_12
        std::vector<unsigned int>{
            0,1,   2,3,   4,5,   6,7,   8,9,  10,11,  12,13, 14,15, 16,17, 18,19, 20,21
        },
    };
    // POSE_BODY_PART_MAPPING on HPP crashes on Windows at dynamic initialization if it's on hpp
    const std::array<std::map<unsigned int, std::string>, (int)PoseModel::Size> POSE_BODY_PART_MAPPING{
        POSE_BODY_25_BODY_PARTS,POSE_COCO_BODY_PARTS,   POSE_MPI_BODY_PARTS,    POSE_MPI_BODY_PARTS,
        POSE_BODY_19_BODY_PARTS,POSE_BODY_19_BODY_PARTS,POSE_BODY_59_BODY_PARTS,POSE_BODY_19_BODY_PARTS,
        POSE_BODY_25_BODY_PARTS,POSE_BODY_25_BODY_PARTS,POSE_BODY_65_BODY_PARTS,POSE_CAR_12_PARTS
    };

    const std::array<std::string, (int)PoseModel::Size> POSE_PROTOTXT{
        "pose/body_25/pose_deploy.prototxt",
        "pose/coco/pose_deploy_linevec.prototxt",
        "pose/mpi/pose_deploy_linevec.prototxt",
        "pose/mpi/pose_deploy_linevec_faster_4_stages.prototxt",
        "pose/body_19/pose_deploy.prototxt",
        "pose/body_19_x2/pose_deploy.prototxt",
        "pose/body_59/pose_deploy.prototxt",
        "pose/body_19n/pose_deploy.prototxt",
        "pose/body_25e/pose_deploy.prototxt",
        "pose/body_19_25/pose_deploy_25.prototxt",
        "pose/body_65/pose_deploy.prototxt",
        "car/car_12/pose_deploy.prototxt",
    };
    const std::array<std::string, (int)PoseModel::Size> POSE_TRAINED_MODEL{
        "pose/body_25/pose_iter_584000.caffemodel",
        "pose/coco/pose_iter_440000.caffemodel",
        "pose/mpi/pose_iter_160000.caffemodel",
        "pose/mpi/pose_iter_160000.caffemodel",
        "pose/body_19/pose_iter_XXXXXX.caffemodel",
        "pose/body_19_x2/pose_iter_XXXXXX.caffemodel",
        "pose/body_59/pose_iter_XXXXXX.caffemodel",
        "pose/body_19n/pose_iter_XXXXXX.caffemodel",
        "pose/body_25e/pose_iter_XXXXXX.caffemodel",
        "pose/body_19_25/pose_iter_XXXXXX.caffemodel",
        "pose/body_65/pose_iter_XXXXXX.caffemodel",
        "car/car_12/pose_iter_XXXXXX.caffemodel",
    };

    // Constant Array Parameters
    // POSE_NUMBER_BODY_PARTS equivalent to size of std::map POSE_BODY_XX_BODY_PARTS - 1 (removing background)
    const std::array<unsigned int, (int)PoseModel::Size> POSE_NUMBER_BODY_PARTS{
        25, 18, 15, 15, 19, 19, 59, 19, 25, 25, 65, 12
    };
    const std::array<std::vector<unsigned int>, (int)PoseModel::Size> POSE_BODY_PART_PAIRS{
        // BODY_25
        std::vector<unsigned int>{
            1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18,   2,17,  5,18,   14,19,19,20,14,21, 11,22,22,23,11,24
        },
        // COCO
        std::vector<unsigned int>{
            1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   1,8,   8,9,   9,10,  1,11,  11,12, 12,13,  1,0,   0,14, 14,16,  0,15, 15,17,  2,16,  5,17
        },
        // MPI_15
        std::vector<unsigned int>{POSE_MPI_PAIRS_RENDER_GPU},
        // MPI_15_4
        std::vector<unsigned int>{POSE_MPI_PAIRS_RENDER_GPU},
        // BODY_19
        std::vector<unsigned int>{
            1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18,   2,17,  5,18
        },
        // BODY_19_X2
        std::vector<unsigned int>{
            1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18,   2,17,  5,18
        },
        // BODY_59
        std::vector<unsigned int>{
            1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18,   2,17,  5,18,// Body
            7,19, 19,20, 20,21, 21,22, 7,23, 23,24, 24,25, 25,26, 7,27, 27,28, 28,29, 29,30, 7,31, 31,32, 32,33, 33,34, 7,35, 35,36, 36,37, 37,38,      // Left hand
            4,39, 39,40, 40,41, 41,42, 4,43, 43,44, 44,45, 45,46, 4,47, 47,48, 48,49, 49,50, 4,51, 51,52, 52,53, 53,54, 4,55, 55,56, 56,57, 57,58       // Right hand
        },
        // BODY_19N
        std::vector<unsigned int>{
            1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18,   2,17,  5,18
        },
        // BODY_25E
        std::vector<unsigned int>{
            1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7, 8,9, 9,10,10,11,8,12,12,13,13,14,  1,0,   0,15, 15,17,  0,16, 16,18, 14,19,19,20,14,21, 11,22,22,23,11,24,
            1,3,  1,4,  1,6,  1,7,  1,9,   1,10, 1,11, 1,12, 1,13, 1,14, 1,15, 1,16, 1,17, 1,18, 1,19, 1,20, 1,21, 1,22, 1,23, 1,24
        },
        // BODY_25_19
        std::vector<unsigned int>{
            1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18,   2,17,  5,18,   14,19,19,20,14,21, 11,22,22,23,11,24
        },
        // BODY_65
        std::vector<unsigned int>{
            1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18,   2,17,  5,18,   14,19,19,20,14,21, 11,22,22,23,11,24,
            7,25, 25,26, 26,27, 27,28, 7,29, 29,30, 30,31, 31,32, 7,33, 33,34, 34,35, 35,36, 7,37, 37,38, 38,39, 39,40, 7,41, 41,42, 42,43, 43,44,      // Left hand
            4,45, 45,46, 46,47, 47,48, 4,49, 49,50, 50,51, 51,52, 4,53, 53,54, 54,55, 55,56, 4,57, 57,58, 58,59, 59,60, 4,61, 61,62, 62,63, 63,64       // Right hand
        },
        // CAR_12
        std::vector<unsigned int>{
            4,5,   4,6,   4,0,   0,2,   4,8,   8,10,   5,7,   5,1,   1,3,   5,9,   9,11
        },
    };
    const std::array<unsigned int, (int)PoseModel::Size> POSE_MAX_PEAKS{
        POSE_MAX_PEOPLE,    // BODY_25
        POSE_MAX_PEOPLE,    // COCO
        POSE_MAX_PEOPLE,    // MPI_15
        POSE_MAX_PEOPLE,    // MPI_15_4
        POSE_MAX_PEOPLE,    // BODY_19
        POSE_MAX_PEOPLE,    // BODY_19_X2
        POSE_MAX_PEOPLE,    // BODY_59
        POSE_MAX_PEOPLE,    // BODY_19N
        POSE_MAX_PEOPLE,    // BODY_25E
        POSE_MAX_PEOPLE,    // BODY_25_19
        POSE_MAX_PEOPLE,    // BODY_65
        POSE_MAX_PEOPLE,    // CAR_12
    };
    const std::array<float, (int)PoseModel::Size> POSE_CCN_DECREASE_FACTOR{
        8.f,    // BODY_25
        8.f,    // COCO
        8.f,    // MPI_15
        8.f,    // MPI_15_4
        8.f,    // BODY_19
        4.f,    // BODY_19_X2
        8.f,    // BODY_59
        8.f,    // BODY_19N
        8.f,    // BODY_25E
        8.f,    // BODY_25_19
        8.f,    // BODY_65
        8.f,    // CAR_12
    };

    // Default Model Parameters
    // They might be modified on running time
    const auto nmsT = (COCO_CHALLENGE ? 0.04f : 0.05f);
    const std::array<float, (int)PoseModel::Size>           POSE_DEFAULT_NMS_THRESHOLD{
        nmsT,       nmsT,       0.6f,       0.3f,       nmsT,       nmsT,       nmsT,       nmsT,       nmsT,       nmsT,       nmsT,       nmsT
    };
    const auto minAT = (COCO_CHALLENGE ? 0.75f : 0.95f); // Matlab version: 0.85f
    const std::array<float, (int)PoseModel::Size>    POSE_DEFAULT_CONNECT_INTER_MIN_ABOVE_THRESHOLD{
        minAT,      minAT,      minAT,      minAT,      minAT,      minAT,      minAT,      minAT,      minAT,      minAT,      minAT,      minAT
        // 0.85f,      0.85f,      0.85f,      0.85f,      0.85f,      0.85f // Matlab version
    };
    const auto conIT = (COCO_CHALLENGE ? 0.01f : 0.05f);
    const std::array<float, (int)PoseModel::Size>           POSE_DEFAULT_CONNECT_INTER_THRESHOLD{
        conIT,      conIT,      0.01f,      0.01f,      conIT,      conIT,      conIT,      conIT,      conIT,      conIT,      conIT,      conIT
    };
    const auto minSC = (COCO_CHALLENGE ? 2 : 3);
    const std::array<unsigned int, (int)PoseModel::Size>    POSE_DEFAULT_CONNECT_MIN_SUBSET_CNT{
        minSC,      minSC,      minSC,      minSC,      minSC,      minSC,      minSC,      minSC,      minSC,      minSC,      minSC,      minSC
    };
    const auto minSS = (COCO_CHALLENGE ? 0.05f : 0.4f);
    const std::array<float, (int)PoseModel::Size>           POSE_DEFAULT_CONNECT_MIN_SUBSET_SCORE{
        minSS,      minSS,      minSS,      minSS,      minSS,      minSS,      minSS,      minSS,      minSS,      minSS,      minSS,      minSS
        // 0.2f,       0.4f,       0.4f,       0.4f,       0.4f,       0.4f // Matlab version
    };

    const std::map<unsigned int, std::string>& getPoseBodyPartMapping(const PoseModel poseModel)
    {
        try
        {
            return POSE_BODY_PART_MAPPING.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return POSE_BODY_PART_MAPPING[(int)poseModel];
        }
    }

    const std::string& getPoseProtoTxt(const PoseModel poseModel)
    {
        try
        {
            return POSE_PROTOTXT.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return POSE_PROTOTXT[(int)poseModel];
        }
    }

    const std::string& getPoseTrainedModel(const PoseModel poseModel)
    {
        try
        {
            return POSE_TRAINED_MODEL.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return POSE_TRAINED_MODEL[(int)poseModel];
        }
    }

    unsigned int getPoseNumberBodyParts(const PoseModel poseModel)
    {
        try
        {
            return POSE_NUMBER_BODY_PARTS.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return 0u;
        }
    }

    const std::vector<unsigned int>& getPosePartPairs(const PoseModel poseModel)
    {
        try
        {
            return POSE_BODY_PART_PAIRS.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return POSE_BODY_PART_PAIRS[(int)poseModel];
        }
    }

    const std::vector<unsigned int>& getPoseMapIndex(const PoseModel poseModel)
    {
        try
        {
            return POSE_MAP_INDEX.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return POSE_MAP_INDEX[(int)poseModel];
        }
    }

    unsigned int getPoseMaxPeaks(const PoseModel poseModel)
    {
        try
        {
            return POSE_MAX_PEAKS.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return 0u;
        }
    }

    float getPoseNetDecreaseFactor(const PoseModel poseModel)
    {
        try
        {
            return POSE_CCN_DECREASE_FACTOR.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return 0.f;
        }
    }

    unsigned int poseBodyPartMapStringToKey(const PoseModel poseModel, const std::vector<std::string>& strings)
    {
        try
        {
            const auto& poseBodyPartMapping = POSE_BODY_PART_MAPPING[(int)poseModel];
            for (const auto& string : strings)
                for (const auto& pair : poseBodyPartMapping)
                    if (pair.second == string)
                        return pair.first;
            error("String(s) could not be found.", __LINE__, __FUNCTION__, __FILE__);
            return 0;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return 0;
        }
    }

    unsigned int poseBodyPartMapStringToKey(const PoseModel poseModel, const std::string& string)
    {
        try
        {
            return poseBodyPartMapStringToKey(poseModel, std::vector<std::string>{string});
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return 0;
        }
    }

    // Default Model Parameters
    float getPoseDefaultNmsThreshold(const PoseModel poseModel)
    {
        try
        {
            return POSE_DEFAULT_NMS_THRESHOLD.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return 0.f;
        }
    }

    float getPoseDefaultConnectInterMinAboveThreshold(const PoseModel poseModel)
    {
        try
        {
            return POSE_DEFAULT_CONNECT_INTER_MIN_ABOVE_THRESHOLD.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return 0.f;
        }
    }

    float getPoseDefaultConnectInterThreshold(const PoseModel poseModel)
    {
        try
        {
            return POSE_DEFAULT_CONNECT_INTER_THRESHOLD.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return 0.f;
        }
    }

    unsigned int getPoseDefaultMinSubsetCnt(const PoseModel poseModel)
    {
        try
        {
            return POSE_DEFAULT_CONNECT_MIN_SUBSET_CNT.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return 0u;
        }
    }

    float getPoseDefaultConnectMinSubsetScore(const PoseModel poseModel)
    {
        try
        {
            return POSE_DEFAULT_CONNECT_MIN_SUBSET_SCORE.at((int)poseModel);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return 0.f;
        }
    }
}
