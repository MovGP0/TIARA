/* Ghidra address: 005c87c0 */
/* Ghidra symbol: FUN_005c87c0 */


undefined1 FUN_005c87c0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_48 [7];
  
  puVar3 = local_48;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_00417740(local_48,&DAT_005bc4e0);
  puVar3 = local_48;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                    (*(longlong **)(param_1 + 0x18),param_2,local_48);
  FUN_00417740(local_48,&DAT_005bc4e0);
  return uVar1;
}

