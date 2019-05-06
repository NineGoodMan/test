//初始化函数
bool AppDelegate::applicationDidFinishLaunching() {
	//获取导演对象
	auto director =Director::getInstance();
	//获取OpenGL视图    
	auto glview = director->getOpenGLView();
    if(!glview) {        
		glview = GLView::create("MyGame");            
		//设置OpenGL视图       
		director->setOpenGLView(glview);
		}    
	// 设置显示每帧显示时间   
	director->setDisplayStats(true);
	// 设置每帧时间
	director->setAnimationInterval(1.0/ 60);   
	autoscene = HelloWorld::createScene();    
	// 运行场景    
	director->runWithScene(scene);    
	return true;
}
// 游戏进入后台
void AppDelegate::applicationDidEnterBackground() {     
	//停止动画   
	Director::getInstance()->stopAnimation();
}

// 从后台返回游戏
void AppDelegate::applicationWillEnterForeground() {     
	//开始动画    
	Director::getInstance()->startAnimation();
}
