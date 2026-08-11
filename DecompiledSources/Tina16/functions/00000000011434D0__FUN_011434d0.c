/* Ghidra address: 011434d0 */
/* Ghidra symbol: FUN_011434d0 */


undefined1
FUN_011434d0(longlong param_1,double param_2,undefined8 param_3,undefined8 param_4,int param_5,
            undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  double local_a8;
  byte *local_a0;
  longlong local_98;
  undefined1 local_90;
  ulonglong local_88;
  undefined1 *local_80;
  double local_70;
  double local_68;
  byte local_5b;
  undefined8 local_5a;
  double local_52;
  undefined8 local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_80 = auStack_c8;
  local_88 = 0;
  FUN_01cc6020(param_1);
  local_30 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_1);
  local_28 = FUN_0113e810(&DAT_0113e408,1,0,0);
  local_20 = FUN_00409570(0x100010);
  FUN_01b16040(param_6);
  local_5b = 10;
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  local_38 = 0;
  local_5a = param_3;
  local_52 = param_2;
  if (-1 < iVar2 + -1) {
    do {
      lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),local_38);
      if (*(int *)(lVar1 + 0x158) == param_5) {
        local_48 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),local_38);
        local_3c = 1 << (local_5b & 0x1f);
        FUN_0040d200(local_20,0x100010,0);
        local_a8 = 0.0;
        local_a0 = &local_5b;
        FUN_0113f440(param_3,param_4,local_48,1);
        local_a8 = 1.0 / ((double)local_3c * local_52);
        local_a0 = (byte *)CONCAT44(local_a0._4_4_,local_3c);
        local_98 = local_20;
        local_90 = 0;
        FUN_0113eac0(local_28,local_48,local_30,local_5a);
        FUN_0113edb0(local_28,local_5b,local_20);
        local_70 = *(double *)(local_20 + 0x10) / (double)local_3c;
        local_68 = *(double *)(local_20 + 0x18) / (double)local_3c;
        FUN_01cc0ae0(local_48,&local_88);
        FUN_01b161f0(param_6,local_88);
      }
      local_38 = local_38 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004095f0(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_01cc6080(param_1,1,0);
  FUN_01cc6510(param_1);
  FUN_00414480(&local_88);
  return local_31;
}

