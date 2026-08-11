/* Ghidra address: 017e94d0 */
/* Ghidra symbol: FUN_017e94d0 */


void FUN_017e94d0(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_48 [48];
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  cVar2 = FUN_010c7a10(uVar3);
  if ((cVar2 != '\0') && (cVar2 = FUN_010c7a10(uVar1), cVar2 != '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x18] = 0;
    return;
  }
  FUN_00c44460(local_48,uVar3,uVar1);
  uVar3 = FUN_010c93c0(local_48);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x18] = 0;
  if (param_3 == 0) {
    FUN_010c86b0(param_2);
  }
  return;
}

