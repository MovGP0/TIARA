/* Ghidra address: 017e3010 */
/* Ghidra symbol: FUN_017e3010 */


void FUN_017e3010(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 local_168;
  undefined1 local_160 [48];
  undefined8 local_130;
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_168 = 0;
  local_130 = 0;
  local_20[0] = 0;
  local_28 = 0;
  sVar1 = *(short *)(param_1 + 0x2da);
  FUN_0040e840(local_128,sVar1);
  FUN_004169a0(&local_28,local_128);
  if (*(short *)(param_1 + 0x2d8) == 0) {
    FUN_00414b50(local_20,*(undefined8 *)(param_1 + 0x620));
  }
  else {
    FUN_010c2250(local_20,*(short *)(param_1 + 0x2d8));
  }
  if (sVar1 == 0) {
    FUN_00414ad0(param_2,local_20[0]);
  }
  else {
    if (*(char *)(param_1 + 0x8c9) == '\0') {
      FUN_00414ad0(param_2,local_20[0]);
    }
    else {
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,&local_130,0x3eb);
      FUN_00416cd0(param_2,5,local_20[0],&DAT_017e3228,local_130,&DAT_017e3228,local_28);
    }
    if ((*(short *)(param_1 + 0x2d8) == 0x201) || (*(short *)(param_1 + 0x2d8) == 0x103)) {
      FUN_00414ff0(local_160,param_1 + 0x898);
      FUN_00415110(local_160,&LAB_017e322c,0x29);
      FUN_004169a0(&local_168,local_160);
      FUN_00416ba0(param_2,local_168,*param_2);
    }
  }
  FUN_00414480(&local_168);
  FUN_00414480(&local_130);
  FUN_00414560(&local_28,2);
  return;
}

