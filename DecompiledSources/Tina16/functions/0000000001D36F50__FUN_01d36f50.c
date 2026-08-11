/* Ghidra address: 01d36f50 */
/* Ghidra symbol: FUN_01d36f50 */


undefined1 FUN_01d36f50(ulonglong *param_1,byte param_2,longlong *param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_39;
  ulonglong uStack_31;
  ulonglong uStack_29;
  undefined1 uStack_21;
  undefined7 local_20;
  undefined1 uStack_19;
  
  local_39 = *param_1;
  uStack_31 = param_1[1];
  uStack_29 = param_1[2];
  uStack_21 = (undefined1)param_1[3];
  local_20 = (undefined7)(param_1[3] >> 8);
  uStack_19 = (undefined1)param_1[4];
  FUN_004179d0(&local_39,&DAT_01d36af8);
  uVar2 = FUN_01d36c80((longlong)(short)local_39,0,param_2 - 1);
  *param_3 = CONCAT17(uStack_19,local_20) + (uVar2 & 0xffff);
  lVar3 = FUN_01d3a780(DAT_03567a70,local_39 & 0xffff);
  lVar3 = FUN_01d3a410(DAT_03567aa8,*(short *)(lVar3 + 0x9e) + (ushort)param_2);
  uVar1 = *(undefined1 *)(lVar3 + 0x33);
  FUN_00417740(&local_39,&DAT_01d36af8);
  return uVar1;
}

