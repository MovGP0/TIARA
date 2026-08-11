/* Ghidra address: 01c065c0 */
/* Ghidra symbol: FUN_01c065c0 */


void FUN_01c065c0(longlong *param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_2 != *(char *)((longlong)param_1 + 0x344)) {
    *(char *)((longlong)param_1 + 0x344) = param_2;
    if (param_2 != '\0') {
      FUN_01c06700(param_1);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
    if (param_2 != '\0') {
      lVar2 = FUN_01bfd980(param_1[100]);
      if (lVar2 == 0) {
        FUN_0080e820(*(undefined8 *)PTR_DAT_02004030);
      }
      else {
        lVar2 = FUN_01bfd980(param_1[100]);
        FUN_00648780(local_20,*(undefined8 *)(lVar2 + 0xf8));
        FUN_0080e230(*(undefined8 *)PTR_DAT_02004030,local_20[0]);
      }
    }
    if (param_2 != '\0') {
      uVar3 = FUN_0065b870(param_1[0xf]);
      iVar1 = FUN_004b1870(param_1[100]);
      thunk_FUN_0415357f(0x8005,uVar3,0xfffffffc,iVar1 + 1);
    }
  }
  FUN_00414480(local_20);
  return;
}

