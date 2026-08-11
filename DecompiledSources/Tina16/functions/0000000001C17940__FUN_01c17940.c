/* Ghidra address: 01c17940 */
/* Ghidra symbol: FUN_01c17940 */


void FUN_01c17940(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  
  uVar1 = FUN_01c07120(param_1);
  lVar2 = FUN_01c03e40(uVar1);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),*(undefined4 *)(lVar2 + 0x8c))
  ;
  uVar1 = FUN_00781840();
  uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
  plVar4 = (longlong *)FUN_00781840();
  (**(code **)(*plVar4 + 0x158))
            (plVar4,local_38,
             (&DAT_01fe48c6)
             [(ulonglong)*(byte *)(param_1 + 0x344) + (ulonglong)*(byte *)(param_1 + 0x363) * 2]);
  FUN_00778dc0(uVar1,uVar3,local_38,param_2,0,0);
  return;
}

