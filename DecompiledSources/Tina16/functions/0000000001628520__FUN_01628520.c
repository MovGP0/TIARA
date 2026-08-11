/* Ghidra address: 01628520 */
/* Ghidra symbol: FUN_01628520 */


undefined8 *
FUN_01628520(int param_1,longlong *param_2,longlong param_3,undefined8 param_4,undefined1 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_01613760(param_1);
  cVar1 = FUN_01d3fd10(puVar3,0);
  if (((cVar1 == '\0') && (param_1 != 0x39)) ||
     (*(undefined1 *)(param_3 + 0x139e1) = 1, *(char *)(param_3 + 0x139e3) == '\0')) {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_016274c0(puVar3,param_2,*(undefined8 *)(param_3 + 0x13980),param_3,uVar2,0,param_5,1);
    FUN_0163e150(param_3,puVar3,0);
    *(int *)(param_3 + 0x74) = *(int *)(param_3 + 0x74) + 1;
  }
  else {
    uVar4 = (**(code **)*puVar3)(puVar3);
    FUN_00418590(uVar4,&DAT_01cf1390);
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}

