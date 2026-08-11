/* Ghidra address: 01838260 */
/* Ghidra symbol: FUN_01838260 */


undefined1 FUN_01838260(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_29 = 0;
  *(undefined1 *)(param_1 + 0x137) = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x180) + 0x60);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x180) + 0x60);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_20,iVar2);
      lVar3 = FUN_0184ce20(*(undefined8 *)(param_1 + 400),local_20);
      if (lVar3 != 0) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x180) + 0x60);
        lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar2);
        if (*(char *)(*(longlong *)(lVar3 + 0x30) + 0x48) == '\a') {
          lVar4 = FUN_0184cde0(*(undefined8 *)(param_1 + 400),param_2);
          if (lVar4 == 0) {
            *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(lVar3 + 0x30);
            FUN_0184b750(param_3);
            uVar5 = FUN_00410e60(&DAT_0181ce38,1);
            *(undefined8 *)(param_3 + 0xb0) = uVar5;
            FUN_0181ec30(uVar5,*(undefined8 *)(param_1 + 0x188));
            lVar3 = FUN_00410e60(&DAT_0181ce38,1);
            FUN_00414ad0(lVar3 + 0x18,L"node");
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x180) + 0x60);
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,iVar2);
            FUN_00416cd0(lVar3 + 0x28,3,L"text=\"",local_28,&DAT_0183853c);
            FUN_0181e490(*(undefined8 *)(param_3 + 0xb0),0,lVar3);
            *(undefined1 *)(param_1 + 0x137) = 1;
            local_29 = 1;
          }
          break;
        }
        uVar5 = FUN_01837140(*(undefined8 *)(param_1 + 0x180),
                             *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x50));
        uVar5 = FUN_0184b380(uVar5,*(undefined8 *)(param_1 + 0x128),1);
        *(undefined8 *)(param_4 + 0x18) = uVar5;
        if (*(longlong *)(param_4 + 0x18) != 0) {
          lVar4 = FUN_018472d0(&PTR_FUN_01846538,1);
          *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x30);
          FUN_00414ad0(lVar4 + 0x20,*(undefined8 *)(param_4 + 0x20));
          FUN_01847440(param_3,param_4);
          FUN_01847420(param_3,lVar4);
          FUN_01847420(param_3,param_4);
          local_29 = 1;
          break;
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  FUN_00414560(&local_28,2);
  return local_29;
}

