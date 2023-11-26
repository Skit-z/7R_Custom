﻿class cfgCloudlets
{
	class Default;
	// Smoke Shells
	class SmokeShellWhite: Default
	{
		moveVelocity[] = {0.2,0.1,0.1};
		size[]={0.2,5,12};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		interval = 0.04;
		lifeTime = 24;
		lifeTimeVar = 2;
	};
	// Helo Dust Clouds
	class HDust1 : Default {
		interval = "0.01 - 0.01* ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=1;
		circleVelocity[] = {"speed*0.8", 0, "speed*0.8"};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 12;
		moveVelocity[] = {0, 0, 0};
		rotationVelocity = 1;
		//weight = 1.25;
weight = 1.5;
		//volume = 1;
volume = 1.2;
		rubbing = 0.01;
		size[] = {3, 6};
		sizeCoef = 1;
		color[] = {{1, 1, 0.8, 0.12}, {1, 1, 0.8, 0.1}, {1, 1, 0.8, 0.05}, {1, 1, 0.8, 0.01}, {1, 1, 0.8, 0.005}, {1, 1, 0.8, 0.001}, {1, 1, 0.8, 0}};
		colorCoef[] = {1, 1, 1, "0.5*((density*3.8) interpolate [0,0.6,0,0.6])"};

		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		lifeTimeVar = 20;
              //position[] = {"positionX - (speedX/5)", "positionY", "positionZ - (speedZ/5)"};
		position[] = {"positionX - (speedX/20)", "positionY - (speedY/20)", "positionZ - (speedZ/20)"};
		positionVar[] = {0, 0, 0};
		MoveVelocityVar[] = {0.15, 0.15, 0.15};
		rotationVelocityVar = 30;
		sizeVar = 0.4;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
                //smokeZoomCoef = 0.12857;
                smokeZoomCoef = 0.0012857;
	};

	class HDust1M: Default {
		interval = "0.01 - 0.01* ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=1;
		circleVelocity[] = {"speed*0.8", 0, "speed*0.8"};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 5;
		moveVelocity[] = {0, 0, 0};
		rotationVelocity = 1;
		//weight = 1.25;
weight = 1.5;
		//volume = 1;
volume = 1.2;
		rubbing = 0.01;
		size[] = {3, 6};
		sizeCoef = 1;
		color[] = {{1, 1, 0.8, 0.12}, {1, 1, 0.8, 0.1}, {1, 1, 0.8, 0.05}, {1, 1, 0.8, 0.01}, {1, 1, 0.8, 0.005}, {1, 1, 0.8, 0.001}, {1, 1, 0.8, 0}};
		colorCoef[] = {1, 1, 1, "0.5*((density*3.8) interpolate [0,0.6,0,0.6])"};

		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		lifeTimeVar = 20;
              //position[] = {"positionX - (speedX/5)", "positionY", "positionZ - (speedZ/5)"};
		position[] = {"positionX - (speedX/20)", "positionY - (speedY/20)", "positionZ - (speedZ/20)"};
		positionVar[] = {0, 0, 0};
		MoveVelocityVar[] = {0.15, 0.15, 0.15};
		rotationVelocityVar = 30;
		sizeVar = 0.4;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
                //smokeZoomCoef = 0.12857;
                smokeZoomCoef = 0.0012857;
	};

        class HDust1L: Default
	{
		interval = "0.01 - 0.01* ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius=1;
		circleVelocity[] = {"speed*0.8", 0, "speed*0.8"};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 5;
		moveVelocity[] = {0, 0, 0};
		rotationVelocity = 1;
		//weight = 1.25;
weight = 1.5;
		//volume = 1;
volume = 1.2;
		rubbing = 0.01;
		size[] = {3, 6};
		sizeCoef = 1;
		color[] = {{1, 1, 0.8, 0.12}, {1, 1, 0.8, 0.1}, {1, 1, 0.8, 0.05}, {1, 1, 0.8, 0.01}, {1, 1, 0.8, 0.005}, {1, 1, 0.8, 0.001}, {1, 1, 0.8, 0}};
		colorCoef[] = {1, 1, 1, "0.5*((density*3.8) interpolate [0,0.6,0,0.6])"};

		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		lifeTimeVar = 20;
              //position[] = {"positionX - (speedX/5)", "positionY", "positionZ - (speedZ/5)"};
		position[] = {"positionX - (speedX/20)", "positionY - (speedY/20)", "positionZ - (speedZ/20)"};
		positionVar[] = {0, 0, 0};
		MoveVelocityVar[] = {0.15, 0.15, 0.15};
		rotationVelocityVar = 30;
		sizeVar = 0.4;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
                //smokeZoomCoef = 0.12857;
                smokeZoomCoef = 0.0012857;
	};

	class HDust1Long : Default {
		interval = "0.015 - 0.007* ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius = 5;
		circleVelocity[] = {"speed*0.2", 0, "speed*0.2"};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0, 0, 0};
		rotationVelocity = 1;
		//weight = 1.27;
weight = 1.5;
		//volume = 1;
volume = 1.2;
		rubbing = 0.01;
		size[] = {5, 10, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
		sizeCoef = 1;
		color[] = {{1, 1, 0.8, 4}, {1, 1, 0.8, 4.6}, {1, 1, 0.8, 3.5}, {1, 1, 0.8, 2.6}, {1, 1, 0.8, 1.8}, {1, 1, 0.8, 1.1}, {1, 1, 0.8, 0.12}};
		colorCoef[] = {1, 1, 1, "0.02*((density*3.8) interpolate [0,0.6,0,0.6])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		lifeTimeVar = 10;
		//position[] = {"positionX - (speedX/5)", "positionY", "positionZ - (speedZ/25)"};
                position[] = {"positionX - (speedX/20)", "positionY - (speedY/20)", "positionZ - (speedZ/20)"};
		positionVar[] = {0.1, 0, 0.1};
		MoveVelocityVar[] = {1.5, 0.05, 1.5};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
                //smokeZoomCoef = 0.12857;
                smokeZoomCoef = 0.0012857;
	};

        class HDust1LongBig : Default {
		interval = "0.015 - 0.007* ((density*1.7) interpolate [0,0.6,0,0.6])";
		circleRadius = 9;
		circleVelocity[] = {"speed*0.2", 0, "speed*0.2"};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 30;
		moveVelocity[] = {0, 0, 0};
		rotationVelocity = 1;
		//weight = 1.27;
weight = 1.5;
		//volume = 1;
volume = 1.2;
		rubbing = 0.01;
		size[] = {5, 10, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
		sizeCoef = 1;
		color[] = {{1, 1, 0.8, 4}, {1, 1, 0.8, 4.6}, {1, 1, 0.8, 3.5}, {1, 1, 0.8, 2.6}, {1, 1, 0.8, 1.8}, {1, 1, 0.8, 1.1}, {1, 1, 0.8, 0.12}};
		colorCoef[] = {1, 1, 1, "0.02*((density*3.8) interpolate [0,0.6,0,0.6])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		lifeTimeVar = 20;
		position[] = {"positionX - (speedX/25)", "positionY - (speedY/25)", "positionZ - (speedZ/25)"};
		positionVar[] = {0.1, 0, 0.1};
		MoveVelocityVar[] = {1.5, 0.05, 1.5};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
                smokeZoomCoef = 0.00012857;
	};

        class HWater1 : Default {
		interval = "0.002 - 0.001 * ((density*2.8) interpolate [0,0.6,0,0.6])";
		circleRadius = 5;
		circleVelocity[] = {"speed*0.2", 0, "speed*0.2"};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 25;
		moveVelocity[] = {0, 0, 0};
		rotationVelocity = 1;
		//weight = 1.27;
		//volume = 1.3;
weight = 1.55;
		volume = 1.3;
		rubbing = 0.01;
		size[] = {5, 10, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 20, 20, 20, 20};
		sizeCoef = 1;
		color[] = {{0.7, 0.8, 1, 0.0}, {0.7, 0.8, 1, 0.2}, {0.7, 0.8, 1, 0.2}, {0.7, 0.8, 1, 0.15}, {0.7, 0.8, 1, 0.12}, {0.7, 0.8, 1, 0.1}, {0.7, 0.8, 1, 0.06}, {0.85, 0.9, 1, 0.01}};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -4;
		lifeTimeVar = 1;
		//position[] = {"positionX - (speedX/5)", "positionY", "positionZ - (speedZ/5)"};
position[] = {"positionX - (speedX/5)", "positionY", "positionZ - (speedZ/20)"};
		positionVar[] = {0.1, 0, 0.1};
		MoveVelocityVar[] = {1.5, 0.05, 1.5};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
                smokeZoomCoef = 0.00012857;
	};
	
	class HWater2 : Default {
		interval = "0.002 - 0.001 * ((density*2.8) interpolate [0,0.6,0,0.6])";
		circleRadius = 5;
		circleVelocity[] = {"speed*1", 0, "speed*1"};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 25;
		moveVelocity[] = {0, 0, 0};
		rotationVelocity = 1;
		weight = 1.55;
		volume = 1.3;
		rubbing = 0.01;
		size[] = {5, 10, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 20, 20, 20, 20};
		sizeCoef = 1;
		color[] = {{0.7, 0.8, 1, 0.0}, {0.7, 0.8, 1, 0.2}, {0.7, 0.8, 1, 0.2}, {0.7, 0.8, 1, 0.15}, {0.7, 0.8, 1, 0.12}, {0.7, 0.8, 1, 0.1}, {0.7, 0.8, 1, 0.06}, {0.85, 0.9, 1, 0.01}};
		colorCoef[] = {1, 1, 1, "1.4 * ((density*2.8) interpolate [0,0.6,0,0.6])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -4;
		lifeTimeVar = 1;
		//position[] = {"positionX - (speedX/5)", "positionY", "positionZ - (speedZ/5)"};
                position[] = {"positionX - (speedX/5)", "positionY", "positionZ - (speedZ/5)"};
		positionVar[] = {0.1, 0, 0.1};
		MoveVelocityVar[] = {1.5, 0.05, 1.5};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
                smokeZoomCoef = 0.82857;
	};
	
	class HWater3 : Default {
		interval = 0.0007;
		circleRadius = 3;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\UniversalOnSurface";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.2;
		moveVelocity[] = {0, 0, 0};
		rotationVelocity = 1;
		weight = 1.5;
		volume = 1.4;
		rubbing = 0;
		size[] = {1.2, 2.5};
		sizeCoef = 1.5;
		color[] = {{0.7, 0.8, 1, 0.15}};
		colorCoef[] = {1, 1, 1, "12 * ((density*2.7) interpolate [0,0.6,0,0.6]) * ((density*2.7) interpolate [0,0.6,0,0.6])"};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		keepOnSurface = 1;
		surfaceOffset = 0.2;
		lifeTimeVar = 0.8;
		//position[] = {"positionX - (speedX/15)", "positionY", "positionZ - (speedZ/15)"};
position[] = {"positionX - (speedX/15)", "positionY", "positionZ - (speedZ/25)"};
		positionVar[] = {6, 0, 6};
		MoveVelocityVar[] = {0, 0, 0};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};