CUDA_INCLUDE_DIRECTORIES( ${CMAKE_CURRENT_SOURCE_DIR} )
#CUDA_ADD_LIBRARY(cuv_image_ops SHARED
#    move.cu
#    image_pyramid.cu
#  )
#TARGET_LINK_LIBRARIES(cuv_image_ops cuv_tensor_ops ${CUDA_LIBRARIES} ${CUDA_CUT_LIBRARY} ${Boost_SERIALIZATION_LIBRARY})
#install(TARGETS cuv_image_ops
#    RUNTIME DESTINATION bin
#    LIBRARY DESTINATION lib
#    ARCHIVE DESTINATION lib/static)
