/*
* @brief        画?角矩形    
* @param        origin            矩形?始点
* @param        destination        矩形?束点
* @param        radius            ?角半径
* @param        segments        ?角等?数，等?越多，?角越平滑
* @param        bFill            是否填充
* @param        color            填充?色
* @attention        
*/
void DrawPrimitivesTest::ccDrawRoundRect( Point origin, Point destination, float radius, unsigned int segments, bool bFill, Color4F color)
{
        //算出1/4?
    
    const float coef    = 0.5f * (float)M_PI / segments;
    Point * vertices    = new Point[segments + 1];
    Point * thisVertices = vertices;
    for(unsigned int i = 0; i <= segments; ++i, ++thisVertices)
    {
        float rads        = (segments - i)*coef;
        thisVertices->x    = (int)(radius * sinf(rads));
        thisVertices->y    = (int)(radius * cosf(rads));
    }
    //
    Point tagCenter;
    float minX    = MIN(origin.x, destination.x);
    float maxX    = MAX(origin.x, destination.x);
    float minY    = MIN(origin.y, destination.y);
    float maxY    = MAX(origin.y, destination.y);
    
    unsigned int dwPolygonPtMax = (segments + 1) * 4;
    Point * pPolygonPtArr = new Point[dwPolygonPtMax];
    Point * thisPolygonPt = pPolygonPtArr;
    int aa = 0;

}
