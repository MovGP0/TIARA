/* Ghidra address: 00703d90 */
/* Ghidra symbol: FUN_00703d90 */


void FUN_00703d90(undefined8 param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 == '\x01') {
    *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x3c) = 0xffffffff;
    *(undefined8 *)(param_2 + 0x28) = 0;
    FUN_00414480(param_2 + 0x20);
  }
  else if (param_3 == '\x02') {
    lVar2 = FUN_004b2640(param_1);
    if ((*(ushort *)(lVar2 + 0x34) & 8) == 0) {
      uVar3 = FUN_004b2640(param_1);
      uVar3 = FUN_0065b870(uVar3);
      iVar1 = FUN_004b1870(param_2);
      thunk_FUN_041b2403(uVar3,0x144,(longlong)iVar1,0);
    }
  }
  return;
}

