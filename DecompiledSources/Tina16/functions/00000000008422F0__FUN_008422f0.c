/* Ghidra address: 008422f0 */
/* Ghidra symbol: FUN_008422f0 */


void FUN_008422f0(longlong param_1,undefined4 param_2,int param_3,undefined1 *param_4,
                 undefined4 *param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_38 [32];
  
  *param_4 = 0;
  *param_5 = 0xffffffff;
  uVar3 = *(uint *)(param_1 + 0x4d4);
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
    uVar3 = uVar3 | *(uint *)(param_1 + 0x552);
  }
  if ((uVar3 & 0xc0) != 0) {
    uVar2 = FUN_0064d120(param_1);
    *(undefined4 *)(param_8 + 0x44) = uVar2;
    uVar2 = FUN_0064d0b0(param_1);
    *(undefined4 *)(param_8 + 0xc) = uVar2;
    cVar1 = FUN_00842230(auStack_38);
    if ((cVar1 == '\0') || ((uVar3 & 0x80) == 0)) {
      if ((*(int *)(param_8 + 0x3c) < param_3) && ((uVar3 & 0x40) != 0)) {
        cVar1 = FUN_00842290(auStack_38);
        if (cVar1 == '\0') {
          FUN_00842090(auStack_38,param_8 + 0x38,param_3,2);
        }
      }
    }
    else if (param_3 < *(int *)(param_8 + 0x3c)) {
      FUN_00842090(auStack_38,param_8,param_2,3);
    }
  }
  return;
}

