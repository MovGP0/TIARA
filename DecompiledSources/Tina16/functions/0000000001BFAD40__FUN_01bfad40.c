/* Ghidra address: 01bfad40 */
/* Ghidra symbol: FUN_01bfad40 */


void FUN_01bfad40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong **)(param_1 + 0x18) != param_2) {
    lVar2 = FUN_01bfab50(param_1);
    while (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x38);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else if (*(longlong *)(lVar2 + 0x18) == 0) {
        lVar2 = FUN_01bfab50(lVar2);
      }
      else {
        FUN_0041ddd0(local_20,PTR_PTR_02002158);
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_20[0]);
        lVar2 = FUN_004134c0(uVar3);
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((plVar1 != (longlong *)0x0) && (plVar1[0x93] != 0)) {
      (**(code **)(*plVar1 + 0x270))(plVar1);
    }
    if (param_2 != (longlong *)0x0) {
      uVar3 = FUN_01bfab50(param_1);
      lVar2 = FUN_01bf9620(uVar3);
      if ((*(ushort *)(lVar2 + 0x34) & 1) == 0) {
        uVar3 = FUN_01bfab50(param_1);
        lVar2 = FUN_01bf9620(uVar3);
        if (*(char *)(lVar2 + 0x150) == '\0') {
          (**(code **)(*param_2 + 0x308))(param_2,param_1);
        }
      }
    }
    *(longlong **)(param_1 + 0x18) = param_2;
  }
  FUN_00414480(local_20);
  return;
}

