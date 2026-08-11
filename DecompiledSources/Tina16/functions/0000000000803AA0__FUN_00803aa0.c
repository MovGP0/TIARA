/* Ghidra address: 00803aa0 */
/* Ghidra symbol: FUN_00803aa0 */


void FUN_00803aa0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x4d6) == '\x01') {
    lVar2 = FUN_0065b870(param_1);
    bVar4 = *(longlong *)(param_2 + 0x10) == lVar2;
    FUN_00802680(param_1,CONCAT71((int7)((ulonglong)param_2 >> 8),bVar4) & 0xffffffff);
    if ((bVar4) && ((*(uint *)(*(longlong *)(DAT_02012668 + 0xa8) + 0xa4) & 4) != 0)) {
      uVar1 = *(undefined8 *)(DAT_02012668 + 0xa8);
      pcVar3 = (code *)FUN_00411550(uVar1,0xffcf);
      (*pcVar3)(uVar1,1);
    }
  }
  return;
}

