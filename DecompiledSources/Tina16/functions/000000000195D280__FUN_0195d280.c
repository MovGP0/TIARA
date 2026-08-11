/* Ghidra address: 0195d280 */
/* Ghidra symbol: FUN_0195d280 */


void FUN_0195d280(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0xc0) + 0x2ac);
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      local_38 = FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x250),
                              *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x254));
      local_30 = FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x248),
                              *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x254));
      local_28 = FUN_00498310(*(int *)(*(longlong *)(param_1 + 0xc0) + 0x248) +
                              *(int *)(*(longlong *)(param_1 + 0xc0) + 600) / 2,
                              *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x24c));
      local_20 = FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x250),
                              *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x254));
      (**(code **)(**(longlong **)(param_1 + 200) + 0xd8))
                (*(longlong **)(param_1 + 200),&local_38,3);
    }
    else if (bVar1 == 0) {
      (**(code **)(**(longlong **)(param_1 + 200) + 0xf8))
                (*(longlong **)(param_1 + 200),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x248),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x24c),
                 *(int *)(*(longlong *)(param_1 + 0xc0) + 0x250) + 1,
                 *(int *)(*(longlong *)(param_1 + 0xc0) + 0x254) + 1);
    }
    else if (bVar1 == 1) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x25c);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0xc0) + 600);
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      iVar2 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x2a8);
      if (iVar2 == 0) {
        iVar3 = iVar3 / 4;
      }
      else {
        iVar3 = FUN_0040c770((double)iVar2 * *(double *)(*(longlong *)(param_1 + 0xc0) + 0x268) *
                             10.0);
      }
      (**(code **)(**(longlong **)(param_1 + 200) + 0x108))
                (*(longlong **)(param_1 + 200),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x248),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x24c),
                 *(int *)(*(longlong *)(param_1 + 0xc0) + 0x250) + 1,
                 *(int *)(*(longlong *)(param_1 + 0xc0) + 0x254) + 1,iVar3,iVar3);
    }
    else if (bVar1 == 2) {
      (**(code **)(**(longlong **)(param_1 + 200) + 0xa0))
                (*(longlong **)(param_1 + 200),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x248),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x24c),
                 *(int *)(*(longlong *)(param_1 + 0xc0) + 0x250) + 1,
                 *(int *)(*(longlong *)(param_1 + 0xc0) + 0x254) + 1);
    }
  }
  else if (bVar1 == 4) {
    local_38 = FUN_00498310(*(int *)(*(longlong *)(param_1 + 0xc0) + 0x248) +
                            *(int *)(*(longlong *)(param_1 + 0xc0) + 600) / 2,
                            *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x24c));
    local_30 = FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x250),
                            *(int *)(*(longlong *)(param_1 + 0xc0) + 0x24c) +
                            *(int *)(*(longlong *)(param_1 + 0xc0) + 0x25c) / 2);
    local_28 = FUN_00498310(*(int *)(*(longlong *)(param_1 + 0xc0) + 0x248) +
                            *(int *)(*(longlong *)(param_1 + 0xc0) + 600) / 2,
                            *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x254));
    local_20 = FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x248),
                            *(int *)(*(longlong *)(param_1 + 0xc0) + 0x24c) +
                            *(int *)(*(longlong *)(param_1 + 0xc0) + 0x25c) / 2);
    (**(code **)(**(longlong **)(param_1 + 200) + 0xd8))(*(longlong **)(param_1 + 200),&local_38,3);
  }
  else if (bVar1 == 5) {
    FUN_0195aad0(*(undefined8 *)(param_1 + 0xc0),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x248),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x254),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x250),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x24c),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x260));
  }
  else if (bVar1 == 6) {
    FUN_0195aad0(*(undefined8 *)(param_1 + 0xc0),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x248),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x24c),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x250),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x254),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x260));
  }
  return;
}

