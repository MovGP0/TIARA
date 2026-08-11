/* Ghidra address: 01b05820 */
/* Ghidra symbol: FUN_01b05820 */


longlong FUN_01b05820(undefined4 *param_1,byte param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  
  if ((param_2 != 0) &&
     (lVar1 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)param_1),
     param_2 <= *(byte *)(lVar1 + 0xb6))) {
    lVar1 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)param_1);
    lVar1 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,
                         *(short *)(lVar1 + 0x9e) + (ushort)param_2 + -1);
    *param_3 = *(undefined1 *)(lVar1 + 0x33);
    uVar2 = FUN_01d36c80(*param_1,0,param_2 - 2);
    return *(longlong *)(param_1 + 0x12) + (uVar2 & 0xffff);
  }
  *param_3 = 0;
  return unaff_RDI;
}

