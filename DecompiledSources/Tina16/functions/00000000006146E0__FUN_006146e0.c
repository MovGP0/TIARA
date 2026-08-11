/* Ghidra address: 006146e0 */
/* Ghidra symbol: FUN_006146e0 */


undefined8 FUN_006146e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_40 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (-1 < (int)param_2) {
    iVar2 = FUN_006146c0(param_1);
    if ((int)param_2 < iVar2) goto LAB_00614763;
  }
  FUN_0041ddd0(local_20,PTR_PTR_02002848);
  local_38 = 0;
  local_40[0] = param_2;
  local_30 = FUN_006146c0(param_1);
  local_28 = 0;
  uVar3 = FUN_0044d530(&PTR_FUN_004347c0,1,local_20[0],local_40,1);
  FUN_004134c0(uVar3);
LAB_00614763:
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(uint *)(lVar1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8);
  FUN_00414480(local_20);
  return uVar3;
}

