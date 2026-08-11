/* Ghidra address: 00cf2cc0 */
/* Ghidra symbol: FUN_00cf2cc0 */


undefined8 * FUN_00cf2cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 local_138;
  longlong *local_130 [2];
  longlong local_120;
  undefined1 local_114 [24];
  undefined1 local_fc [193];
  undefined1 local_3b [7];
  undefined1 local_34 [7];
  undefined1 local_2d [8];
  undefined1 local_25 [8];
  undefined1 local_1d [13];
  
  local_130[0] = (longlong *)0x0;
  local_138 = 0;
  local_120 = 0;
  FUN_00874450(local_130);
  FUN_0043e130(&local_138,param_2);
  (**(code **)(*local_130[0] + 0x70))(local_130[0],&local_120,local_138);
  uVar2 = 0;
  if (local_120 != 0) {
    uVar2 = *(undefined8 *)(local_120 + -8);
  }
  iVar1 = FUN_008764e0(uVar2,0xe);
  if (0 < iVar1) {
    FUN_00409a70(local_120,local_3b,(longlong)iVar1);
  }
  if ((iVar1 < 0xe) && (iVar1 < 0xe)) {
    puVar3 = local_3b + iVar1;
    do {
      *puVar3 = 0;
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 != 0xe);
  }
  FUN_00cf2b30(local_3b,local_fc);
  (**(code **)PTR_DAT_020017a8)(&DAT_01eb221c,local_2d,local_fc,1);
  FUN_00cf2b30(local_34,local_fc);
  (**(code **)PTR_DAT_020017a8)(&DAT_01eb221c,local_25,local_fc,1);
  FUN_0040d200(local_1d,5,0);
  FUN_00cf2c10(local_2d,param_3,local_114);
  FUN_00419260(param_1,&DAT_0086e978,1,0x18);
  FUN_00409a70(local_114,*param_1,0x18);
  FUN_00414480(&local_138);
  FUN_0041b800(local_130);
  FUN_00419430(&local_120,&DAT_0086e978);
  return param_1;
}

