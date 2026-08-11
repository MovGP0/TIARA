/* Ghidra address: 00c76c30 */
/* Ghidra symbol: FUN_00c76c30 */


void FUN_00c76c30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00742eb0(param_1[0x7a],0);
  if (param_1[0x78] != 0) {
    FUN_00410f20(param_1[0x78]);
  }
  if (param_1[0x79] != 0) {
    FUN_00410f20(param_1[0x79]);
  }
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  if (*(longlong *)(param_1[0x37] + 0x10) != 0) {
    FUN_0064dbe0(*(longlong *)(param_1[0x37] + 0x10),(char)param_1[0x41]);
    FUN_00655f80(*(undefined8 *)(param_1[0x37] + 0x10),0);
    (**(code **)(**(longlong **)(param_1[0x37] + 0x10) + 0x130))
              (*(longlong **)(param_1[0x37] + 0x10),param_1[0x3e]);
    FUN_0064d040(*(undefined8 *)(param_1[0x37] + 0x10),param_1 + 0x3f);
  }
  lVar1 = param_1[0x3a];
  if (((*(char *)(lVar1 + 8) != '\0') && (*(char *)(lVar1 + 0x29) == '\0')) &&
     (*(longlong *)(lVar1 + 0x10) != 0)) {
    FUN_00c6ee60(lVar1);
  }
  uVar2 = (**(code **)(*param_1 + 0x90))(param_1);
  thunk_FUN_03c9d277(uVar2,0xfffffffc,param_1[0x52]);
  FUN_0080e790(*(undefined8 *)PTR_DAT_02004030);
  param_1[0x53] = 0;
  DAT_02019d30 = 0;
  thunk_FUN_041c90ed(DAT_02019d38);
  thunk_FUN_041c90ed(DAT_02019d40);
  DAT_02019d48 = param_1[0x34];
  DAT_02019d38 = param_1[0x33];
  DAT_02019d30 = param_1[0x32];
  DAT_02019d20 = (undefined4)param_1[0x35];
  DAT_02019d24 = *(undefined4 *)((longlong)param_1 + 0x1ac);
  DAT_02019d28 = (undefined4)param_1[0x36];
  DAT_02019d2c = *(undefined4 *)((longlong)param_1 + 0x1b4);
  FUN_00722840(param_1);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return;
}

