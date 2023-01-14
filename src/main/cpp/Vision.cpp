#include "Vision.h"

#include <wpi/json.h>

std::shared_ptr<frc::AprilTagFieldLayout> Get2023Layout() {
  std::string desc = "{\"tags\":[{\"ID\":1,\"pose\":{\"translation\":{\"x\":15.513558,\"y\":1.071626,\"z\":0.462788},\"rotation\":{\"quaternion\":{\"W\":0.0,\"X\":0.0,\"Y\":0.0,\"Z\":1.0}}}},{\"ID\":2,\"pose\":{\"translation\":{\"x\":15.513558,\"y\":2.748026,\"z\":0.462788},\"rotation\":{\"quaternion\":{\"W\":0.0,\"X\":0.0,\"Y\":0.0,\"Z\":1.0}}}},{\"ID\":3,\"pose\":{\"translation\":{\"x\":15.513558,\"y\":4.424426,\"z\":0.462788},\"rotation\":{\"quaternion\":{\"W\":0.0,\"X\":0.0,\"Y\":0.0,\"Z\":1.0}}}},{\"ID\":4,\"pose\":{\"translation\":{\"x\":16.178784,\"y\":6.749796,\"z\":0.695452},\"rotation\":{\"quaternion\":{\"W\":0.0,\"X\":0.0,\"Y\":0.0,\"Z\":1.0}}}},{\"ID\":5,\"pose\":{\"translation\":{\"x\":0.36195,\"y\":6.749796,\"z\":0.695452},\"rotation\":{\"quaternion\":{\"W\":1.0,\"X\":0.0,\"Y\":0.0,\"Z\":0.0}}}},{\"ID\":6,\"pose\":{\"translation\":{\"x\":1.02743,\"y\":4.424426,\"z\":0.462788},\"rotation\":{\"quaternion\":{\"W\":1.0,\"X\":0.0,\"Y\":0.0,\"Z\":0.0}}}},{\"ID\":7,\"pose\":{\"translation\":{\"x\":1.02743,\"y\":2.748026,\"z\":0.462788},\"rotation\":{\"quaternion\":{\"W\":1.0,\"X\":0.0,\"Y\":0.0,\"Z\":0.0}}}},{\"ID\":8,\"pose\":{\"translation\":{\"x\":1.02743,\"y\":1.071626,\"z\":0.462788},\"rotation\":{\"quaternion\":{\"W\":1.0,\"X\":0.0,\"Y\":0.0,\"Z\":0.0}}}}],\"field\":{\"length\":16.54175,\"width\":8.0137}}";

  wpi::json json = wpi::json::parse(desc);
  std::shared_ptr<frc::AprilTagFieldLayout> layout = std::make_shared<frc::AprilTagFieldLayout>();
  frc::from_json(json, *layout);
  return layout;
}