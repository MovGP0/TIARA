/* Ghidra address: 01071890 */
/* Ghidra symbol: FUN_01071890 */


void FUN_01071890(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  char local_9;
  
  local_28 = 0;
  local_20[0] = 0;
  if ((*(int *)(*(longlong *)(param_1 + 0x6e8) + 0x4a8) == 1) && (*(int *)(param_1 + 0x738) == 4)) {
    FUN_01055a50(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730),param_1 + 0x720,
                 &local_9,*(undefined8 *)(param_1 + 0x740));
    lVar3 = 0;
    if (*(longlong *)(param_1 + 0x720) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x720) + -8);
    }
    if (lVar3 == 0) {
      FUN_0041ddd0(local_20,PTR_PTR_02005560);
      FUN_01b1cf30(param_1 + 0x71e,local_20[0]);
    }
    else if (local_9 == '\0') {
      FUN_0041ddd0(&local_28,PTR_PTR_020029c0);
      FUN_01b1cf30(param_1 + 0x71e,local_28);
    }
  }
  if (*(char *)(param_1 + 0x71e) == '\0') {
    FUN_01071e10(param_1);
    *(undefined4 *)(param_1 + 0x71a) = 0;
    if (*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x4a8) == 1) {
      *(uint *)(param_1 + 0x71a) = *(uint *)(param_1 + 0x71a) | 1;
    }
    else {
      *(uint *)(param_1 + 0x71a) = *(uint *)(param_1 + 0x71a) & 0xfffffffe;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x6e8) + 0x4a8);
    if (iVar1 == 1) {
      *(uint *)(param_1 + 0x71a) = *(uint *)(param_1 + 0x71a) | 2;
    }
    else if (iVar1 == 2) {
      *(uint *)(param_1 + 0x71a) = *(uint *)(param_1 + 0x71a) | 0x2000;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    *(char *)(param_1 + 0x718) = cVar2 + '\x01';
  }
  FUN_00414560(&local_28,2);
  return;
}

