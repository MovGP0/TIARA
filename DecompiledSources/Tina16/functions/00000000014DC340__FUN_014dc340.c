/* Ghidra address: 014dc340 */
/* Ghidra symbol: FUN_014dc340 */


void FUN_014dc340(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined2 local_48 [4];
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 *local_30;
  
  sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar2 == 0x92) {
    (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
    local_40[0] = 0x4e454c03;
    cVar1 = FUN_014db910(local_40,param_2,&local_38);
    if (cVar1 != '\0') {
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_48[0] = 0x5201;
    cVar1 = FUN_014db910(local_48,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_48[0] = 0x4c01;
    cVar1 = FUN_014db910(local_48,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_48[0] = 0x4701;
    cVar1 = FUN_014db910(local_48,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_48[0] = 0x4301;
    cVar1 = FUN_014db910(local_48,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,4,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
  }
  else {
    (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_30);
    cVar1 = FUN_014db910(&DAT_014dc6e4,param_2,&local_38);
    if (cVar1 != '\0') {
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_50 = 0x5402;
    uStack_4e = 0x44;
    cVar1 = FUN_014db910(&local_50,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_48[0] = 0x4601;
    cVar1 = FUN_014db910(local_48,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_50 = 0x4e02;
    uStack_4e = 0x4c;
    cVar1 = FUN_014db910(&local_50,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_40[0] = 0x31564903;
    cVar1 = FUN_014db910(local_40,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,4,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_40[0] = 0x31434903;
    cVar1 = FUN_014db910(local_40,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,5,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_40[0] = 0x32564903;
    cVar1 = FUN_014db910(local_40,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,6,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    local_40[0] = 0x32434903;
    cVar1 = FUN_014db910(local_40,param_2,&local_38);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,7,&local_30);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
  }
  return;
}

