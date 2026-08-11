/* Ghidra address: 004073a0 */
/* Ghidra symbol: FUN_004073a0 */


void FUN_004073a0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  param_3 = param_3 + -8;
  for (lVar4 = -param_3; lVar4 < 0; lVar4 = lVar4 + 0x10) {
    puVar1 = (undefined8 *)(lVar4 + param_1 + param_3);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(lVar4 + param_2 + param_3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
  }
  *(undefined8 *)(lVar4 + param_2 + param_3) = *(undefined8 *)(lVar4 + param_1 + param_3);
  return;
}

