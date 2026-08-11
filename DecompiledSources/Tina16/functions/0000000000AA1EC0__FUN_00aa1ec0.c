/* Ghidra address: 00aa1ec0 */
/* Ghidra symbol: FUN_00aa1ec0 */


int FUN_00aa1ec0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  int local_30;
  undefined1 local_2c [4];
  
  *(undefined1 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0x1fffffff;
  lVar1 = *(longlong *)(param_1 + 0x568);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  *(undefined1 *)(*(longlong *)(lVar1 + 0x560) + 0x126) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x570) + 0xb8))
            (*(longlong **)(param_1 + 0x570),param_2,&local_30,local_2c,param_3,param_4);
  iVar2 = FUN_00aa32e0(*(undefined8 *)(param_1 + 0x568),param_2,param_3,param_4,
                       *(int *)(param_1 + 0x484) + *(int *)(param_1 + 0x47c));
  if (local_30 < iVar2) {
    local_30 = iVar2;
  }
  if (((local_30 < param_3) && (*(int *)(param_1 + 0x484) == 0)) && (*(int *)(param_1 + 0x47c) == 0)
     ) {
    if (*(char *)(param_1 + 0x578) == '\x02') {
      *(int *)(param_1 + 0x484) = (param_3 - local_30) / 2;
    }
    else if (*(char *)(param_1 + 0x578) == '\x03') {
      *(int *)(param_1 + 0x484) = param_3 - local_30;
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x568) + 0x582) = 2;
  return local_30;
}

