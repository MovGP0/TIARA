/* Ghidra address: 0195b9f0 */
/* Ghidra symbol: FUN_0195b9f0 */


void FUN_0195b9f0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(*param_2 + 0x10);
  uVar2 = *(undefined1 *)(*param_2 + 0x14);
  uVar1 = *(undefined8 *)(*param_2 + 0x18);
  *(undefined4 *)(*param_2 + 0x10) = *(undefined4 *)(*param_3 + 0x10);
  *(undefined1 *)(*param_2 + 0x14) = *(undefined1 *)(*param_3 + 0x14);
  *(undefined8 *)(*param_2 + 0x18) = *(undefined8 *)(*param_3 + 0x18);
  *(undefined4 *)(*param_3 + 0x10) = uVar3;
  *(undefined1 *)(*param_3 + 0x14) = uVar2;
  *(undefined8 *)(*param_3 + 0x18) = uVar1;
  return;
}

