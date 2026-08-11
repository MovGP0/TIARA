/* Ghidra address: 01561900 */
/* Ghidra symbol: FUN_01561900 */


void FUN_01561900(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19 [9];
  
  local_50[0] = 0;
  local_58 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  cVar1 = FUN_01995600(param_4,0,0);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_01995660(param_4,1,0);
    while (plVar2 != (longlong *)0x0) {
      FUN_01d03160(plVar2);
      cVar1 = FUN_015f5c70(*(undefined8 *)(param_1 + 0xa18),plVar2,0xffff,&local_3c,local_19);
      if ((cVar1 != '\0') && (cVar1 = FUN_01610d00(plVar2), cVar1 == '\0')) {
        FUN_015ef700(local_50,plVar2);
        FUN_017ff4a0(plVar2,&local_58);
        FUN_00416cd0(&local_30,3,local_50[0],&DAT_01561acc,local_58);
        (**(code **)(*plVar2 + 0x288))(plVar2,&local_38);
        (**(code **)(*param_3 + 0x78))(param_3,local_30);
        (**(code **)(*param_2 + 0x78))(param_2,local_38);
        if (local_3c == 0x40) {
          *(undefined1 *)(param_1 + 0x708) = 1;
        }
      }
      FUN_01995800(param_4,0,0);
      plVar2 = (longlong *)FUN_01995660(param_4,0,0);
    }
  }
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_38,3);
  return;
}

