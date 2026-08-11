/* Ghidra address: 0074d940 */
/* Ghidra symbol: FUN_0074d940 */


void FUN_0074d940(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0xd4) == param_2) goto code_r0x0074da4b;
  *(char *)(param_1 + 0xd4) = param_2;
  if (*(char *)(param_1 + 0x78) == '\0') {
LAB_0074d9a8:
    FUN_0074e2e0(param_1);
  }
  else if (*(char *)(param_1 + 0x78) != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x40))(*(longlong **)(param_1 + 0x98));
    if (cVar1 != '\0') goto LAB_0074d9a8;
  }
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    if (*(char *)(param_1 + 0xd4) == '\0') {
      if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
        cVar1 = FUN_0074e130(param_1,2);
        if (cVar1 == '\0') {
          FUN_0041ddd0(&local_10,PTR_PTR_020047c0);
          uVar2 = FUN_0044d490(&PTR_FUN_00472738,1,local_10);
          FUN_004134c0(uVar2);
        }
      }
    }
    else {
      FUN_0074e130(param_1,0);
    }
    if (*(char *)(param_1 + 0x78) != '\0') {
      FUN_00742eb0(*(undefined8 *)(param_1 + 0xc0),param_2);
    }
  }
code_r0x0074da4b:
  FUN_00414480(&local_10);
  return;
}

