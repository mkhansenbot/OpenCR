// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file Vector3.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _GEOMETRY_MSGS_VECTOR3_HPP_
#define _GEOMETRY_MSGS_VECTOR3_HPP_


#include "micrortps.hpp"
#include <topic_config.h>
#include <topic.hpp>


namespace geometry_msgs {

class Vector3 : public ros2::Topic<Vector3>
{
public:
    double x;
    double y;
    double z;

  Vector3():
    Topic("geometry_msgs::msg::dds_::Vector3_", GEOMETRY_MSGS_VECTOR3_TOPIC),
    x(0), y(0), z(0)
  { 
  }


  virtual bool serialize(MicroBuffer* writer, const Vector3* topic)
  {
    serialize_double(writer, topic->x);
    serialize_double(writer, topic->y);
    serialize_double(writer, topic->z);

    return writer->error == BUFFER_OK;
  }

  virtual bool deserialize(MicroBuffer* reader, Vector3* topic)
  {
    deserialize_double(reader, &topic->x);
    deserialize_double(reader, &topic->y);
    deserialize_double(reader, &topic->z);

    return reader->error == BUFFER_OK;
  }

  virtual uint32_t size_of_topic(const Vector3* topic)
  {
    (void)(topic);

    uint32_t size = 0;

    size += 8 + get_alignment(size, 8);
    size += 8 + get_alignment(size, 8);
    size += 8 + get_alignment(size, 8);

    return size;
  }



};

} // namespace geometry_msgs


#endif // _GEOMETRY_MSGS_VECTOR3_HPP_