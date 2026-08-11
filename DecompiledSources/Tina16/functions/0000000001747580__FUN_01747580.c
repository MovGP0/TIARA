/* Ghidra address: 01747580 */
/* Ghidra symbol: FUN_01747580 */


void FUN_01747580(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_38 [16];
  int local_28;
  int local_24;
  char *local_20;
  
  FUN_01d04970(param_1[5],param_3,param_4,&local_24,&local_28,1);
  (**(code **)(*param_1 + 0x10))(param_1,local_38,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  uVar2 = FUN_00498310(local_24,local_28);
  iVar1 = thunk_FUN_03f16006(local_38,uVar2);
  if (iVar1 != 0) {
    cVar3 = (char)((local_24 + 0x1a) / 0xd) + (char)((local_28 + 0x1a) / 0xd) * '\x04';
    (**(code **)(*(longlong *)param_1[5] + 0x2d0))((longlong *)param_1[5],0,&local_20);
    if (cVar3 != *local_20) {
      *local_20 = cVar3;
      FUN_0173cbf0(1);
      if (param_1[6] != 0) {
        FUN_019af200(param_1[6],param_1[5]);
      }
      uVar2 = FUN_019a45d0();
      uVar2 = FUN_0198d430(uVar2);
      (**(code **)(*param_1 + 0x48))(param_1,uVar2);
      uVar2 = FUN_019a45d0();
      FUN_0199e310(uVar2,1,1,0);
    }
  }
  return;
}

