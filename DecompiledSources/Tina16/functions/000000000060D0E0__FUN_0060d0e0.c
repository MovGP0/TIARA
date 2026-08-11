/* Ghidra address: 0060d0e0 */
/* Ghidra symbol: FUN_0060d0e0 */


undefined1 FUN_0060d0e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  short *psVar2;
  bool bVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  short local_18;
  ushort local_16;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_004b6da0(param_2);
  psVar2 = &local_18;
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2,psVar2,6);
  if ((iVar1 == 6) && (local_18 == 0)) {
    if (local_16 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)psVar2 >> 8),1) << ((byte)local_16 & 0x1f) & 3U) != 0
      ;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      local_11 = 1;
      goto LAB_0060d155;
    }
  }
  local_11 = 0;
LAB_0060d155:
  FUN_004b6dc0(param_2,local_10);
  return local_11;
}

