/* Ghidra address: 017443f0 */
/* Ghidra symbol: FUN_017443f0 */


void FUN_017443f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  char unaff_DIL;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  char *local_30 [2];
  
  puVar3 = &local_38;
  FUN_01d04970(param_1[5],param_3,param_4,&local_34,puVar3,1);
  uVar2 = CONCAT71((int7)((ulonglong)puVar3 >> 8),*PTR_DAT_02001560);
  (**(code **)(*param_1 + 0x10))(param_1,local_58,param_2,*PTR_DAT_02002480,uVar2);
  uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar2 = FUN_00498310(local_34,local_38);
  iVar1 = thunk_FUN_03f16006(local_58,uVar2);
  if (iVar1 != 0) {
    uVar2 = CONCAT44(uVar4,0x20);
    FUN_00498350(local_48,0x10,8,0x28,uVar2);
    uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar2 = FUN_00498310(local_34,local_38);
    iVar1 = thunk_FUN_03f16006(local_48,uVar2);
    if (iVar1 == 0) {
      uVar2 = CONCAT44(uVar4,0x20);
      FUN_00498350(local_48,0x30,8,0x48,uVar2);
      uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uVar2 = FUN_00498310(local_34,local_38);
      iVar1 = thunk_FUN_03f16006(local_48,uVar2);
      if (iVar1 == 0) {
        uVar2 = CONCAT44(uVar4,0x40);
        FUN_00498350(local_48,0x10,0x28,0x28,uVar2);
        uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
        uVar2 = FUN_00498310(local_34,local_38);
        iVar1 = thunk_FUN_03f16006(local_48,uVar2);
        if (iVar1 == 0) {
          FUN_00498350(local_48,0x30,0x28,0x48,CONCAT44(uVar4,0x40));
          uVar2 = FUN_00498310(local_34,local_38);
          iVar1 = thunk_FUN_03f16006(local_48,uVar2);
          if (iVar1 != 0) {
            unaff_DIL = '\x04';
          }
        }
        else {
          unaff_DIL = '\x03';
        }
      }
      else {
        unaff_DIL = '\x02';
      }
    }
    else {
      unaff_DIL = '\x01';
    }
    (**(code **)(*(longlong *)param_1[5] + 0x2d0))((longlong *)param_1[5],0,local_30);
    if (unaff_DIL != *local_30[0]) {
      *local_30[0] = unaff_DIL;
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

