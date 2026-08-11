/* Ghidra address: 0184c560 */
/* Ghidra symbol: FUN_0184c560 */


char FUN_0184c560(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_71 = '\0';
  iVar5 = 0;
  while( true ) {
    iVar2 = FUN_01847410(param_1);
    if (iVar2 <= iVar5) break;
    plVar3 = (longlong *)FUN_0184c6d0(param_1,iVar5);
    iVar2 = FUN_01847410(param_1);
    if (iVar5 < iVar2 + -1) {
      lVar4 = FUN_0184c6d0(param_1,iVar5 + 1);
      if (lVar4 != 0) goto LAB_0184c639;
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_40);
      cVar1 = FUN_0046f3d0(param_2,&local_40);
      if (cVar1 == '\0') {
LAB_0184c62b:
        local_71 = '\0';
      }
      else {
        plVar3 = (longlong *)FUN_0184c6d0(param_1,iVar5 + 2);
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_58);
        cVar1 = FUN_0046f380(param_2,&local_58);
        if (cVar1 == '\0') goto LAB_0184c62b;
        local_71 = '\x01';
      }
      iVar5 = iVar5 + 2;
    }
    else {
LAB_0184c639:
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_70);
      local_71 = FUN_0046f320(param_2,&local_70);
    }
    if (local_71 != '\0') break;
    iVar5 = iVar5 + 1;
  }
  FUN_00417840(&local_70,&DAT_004013d8,3);
  return local_71;
}

