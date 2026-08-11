/* Ghidra address: 006f0d80 */
/* Ghidra symbol: FUN_006f0d80 */


undefined8 * FUN_006f0d80(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  undefined1 local_28 [7];
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  FUN_00419430(param_2,&DAT_00406578);
  FUN_004b6dc0(param_3,0);
  local_20 = (longlong *)FUN_004baeb0(&PTR_FUN_0047f878,1,param_3,0x400);
  FUN_004c1d40(local_20);
  (**(code **)(*local_20 + 0x50))(local_20,&local_21,local_28);
  FUN_004c1d80(local_20,&local_48);
  FUN_004c1d80(local_20,&local_50);
  FUN_004c1d80(local_20,&local_58);
  do {
    cVar1 = FUN_004bea50(local_20);
    if (cVar1 == '\0') goto code_r0x006f0edd;
    FUN_004c25a0(local_20);
    FUN_004c1d80(local_20,&local_60);
    iVar2 = FUN_00416db0(local_60,L"Items.ItemData");
  } while (iVar2 != 0);
  FUN_004be030(local_20,10);
  FUN_004bea90(local_20,&local_2c,4);
  FUN_00419260(param_2,&DAT_00406578,1,(longlong)local_2c);
  FUN_004bea90(local_20,*param_2,(longlong)local_2c);
code_r0x006f0edd:
  FUN_00410f20(local_20);
  FUN_00414560(&local_60,4);
  return param_2;
}

