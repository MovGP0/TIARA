/* Ghidra address: 00652b60 */
/* Ghidra symbol: FUN_00652b60 */


void FUN_00652b60(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_00411a80(param_1,param_2);
  FUN_004d2c10(param_1);
  FUN_0065cd90(param_1);
  FUN_00410f20(param_1[0x91]);
  if (*(char *)((longlong)param_1 + 0x393) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x393) = 0;
    FUN_00649c60(param_1,0);
  }
  FUN_0041b800(param_1 + 0x68);
  lVar1 = param_1[0x67];
  param_1[0x67] = 0;
  FUN_00410f20(lVar1);
  lVar1 = param_1[0x26];
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    FUN_00410f20(*(undefined8 *)(lVar1 + 0x10));
    FUN_00667ed0(param_1[0x26],0);
  }
  if (param_1[0xf] != 0) {
    FUN_00654870(param_1,1);
  }
  if (param_1[0x8d] != 0) {
    (**(code **)(*param_1 + 0x1f0))(param_1);
  }
  iVar2 = FUN_00654c00(param_1);
  while (iVar2 != 0) {
    plVar3 = (longlong *)FUN_00654bc0(param_1,iVar2 + -1);
    FUN_00654910(param_1,plVar3);
    (**(code **)(*plVar3 + -0x20))(plVar3,1);
    iVar2 = FUN_00654c00(param_1);
  }
  lVar1 = param_1[0x66];
  param_1[0x66] = 0;
  FUN_00410f20(lVar1);
  if (param_1[0x8e] != 0) {
    FUN_004d62f0(param_1[0x8e]);
  }
  lVar1 = param_1[0x65];
  param_1[0x65] = 0;
  FUN_00410f20(lVar1);
  if ((*PTR_DAT_02004258 & 1) != 0) {
    FUN_00782350(&DAT_0075cd78,0,param_1);
  }
  if (*(longlong *)PTR_DAT_02003a00 != 0) {
    (**(code **)PTR_DAT_02003a00)(0,param_1);
  }
  FUN_0064be90(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

