/* Ghidra address: 01429360 */
/* Ghidra symbol: FUN_01429360 */


void FUN_01429360(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 local_40 [2];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29 [33];
  
  local_40[0] = 0;
  uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c0));
  dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
  if ((360.0 < dVar4) || (dVar4 <= 0.0)) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,local_40,0x134);
    FUN_01429040(param_1,local_40[0]);
  }
  if (*(char *)(param_1 + 0x728) == '\0') {
    if (*(int *)(param_1 + 0x6f8) == 0) {
      uVar3 = FUN_01428600(*(undefined8 *)(param_1 + 0x708),*(undefined8 *)(param_1 + 0x710),
                           *(undefined8 *)(param_1 + 0x718),*(undefined8 *)(param_1 + 0x720),dVar4);
    }
    else {
      uVar3 = FUN_014281e0(*(undefined8 *)(param_1 + 0x708),*(undefined8 *)(param_1 + 0x710),
                           *(undefined8 *)(param_1 + 0x718),*(undefined8 *)(param_1 + 0x720),uVar3,
                           dVar4);
    }
    puVar2 = (undefined8 *)
             FUN_01cfde70(*(undefined8 *)(param_1 + 0x6f0),*(int *)(param_1 + 0x6f8) + 1,0,local_29,
                          &local_2a,&local_2b);
    *puVar2 = uVar3;
    DAT_01f49758 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c0));
  }
  FUN_00414480(local_40);
  return;
}

