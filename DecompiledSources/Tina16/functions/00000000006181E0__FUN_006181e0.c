/* Ghidra address: 006181e0 */
/* Ghidra symbol: FUN_006181e0 */


undefined8
FUN_006181e0(uint param_1,undefined4 param_2,uint param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_58 [48];
  
  lVar3 = FUN_006180f0();
  if (lVar3 == 0) {
    uVar1 = thunk_FUN_0413f31b(param_3,param_4,-(uint)((param_1 & 1) != 0),param_2,
                               -(uint)((param_1 & 2) != 0));
  }
  else {
    while (uVar1 = thunk_FUN_041b9ec5(param_3,param_4,param_2,0x4bf,param_1), uVar1 == param_3) {
      iVar2 = thunk_FUN_04166556(local_58,lVar3,0,0,1);
      if (iVar2 != 0) {
        thunk_FUN_040cea4c(local_58);
        thunk_FUN_040da573(local_58);
      }
    }
  }
  if (uVar1 == 0x102) {
    uVar4 = 0x8001011f;
  }
  else if (uVar1 == 0xc0) {
    uVar4 = 0x80010115;
  }
  else {
    uVar4 = 0;
    if ((uVar1 < 0x80) || (param_3 + 0x80 <= uVar1)) {
      *param_5 = uVar1;
    }
    else {
      *param_5 = uVar1 - 0x80;
    }
  }
  return uVar4;
}

