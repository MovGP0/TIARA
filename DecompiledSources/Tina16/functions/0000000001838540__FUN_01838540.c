/* Ghidra address: 01838540 */
/* Ghidra symbol: FUN_01838540 */


void FUN_01838540(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar1 = FUN_0181e3e0(*(undefined8 *)(param_1 + 0x188));
  if (param_2 <= iVar1 + -1) {
    iVar1 = ((iVar1 + -1) - param_2) + 1;
    do {
      uVar3 = FUN_0181e3c0(*(undefined8 *)(param_1 + 0x188),param_2);
      FUN_01837010(*(undefined8 *)(param_1 + 0x180),uVar3);
      lVar4 = FUN_0181e3c0(*(undefined8 *)(param_1 + 0x188),param_2);
      FUN_0043e1a0(local_30,*(undefined8 *)(lVar4 + 0x18));
      FUN_00414b50(param_1 + 0x120,local_30[0]);
      uVar3 = FUN_0181e3c0(*(undefined8 *)(param_1 + 0x188),param_2);
      FUN_0181e5f0(uVar3,&local_38,L"text");
      FUN_00414b50(param_1 + 0x128,local_38);
      iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x120),L"node");
      if (iVar2 == 0) {
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x128),&DAT_01838858);
        if (iVar2 == 0) goto LAB_018386f1;
        uVar3 = FUN_018472d0(&PTR_FUN_01846538,1);
        *(undefined8 *)(param_1 + 0x118) = uVar3;
        FUN_01847420(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118));
        FUN_00414ad0(*(longlong *)(param_1 + 0x118) + 0x20,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 8));
        uVar3 = FUN_018334f0(&PTR_FUN_01833428,1,*(undefined8 *)(param_1 + 0x128));
        FUN_0184caa0(*(undefined8 *)(param_1 + 400),0,uVar3);
        *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x18) = uVar3;
      }
      else {
LAB_018386f1:
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x120),L"expr");
        if (iVar2 == 0) {
          uVar3 = FUN_0181e3c0(*(undefined8 *)(param_1 + 0x188),param_2);
          uVar3 = FUN_0183a030(*(undefined8 *)(param_1 + 0x180),uVar3,*(undefined8 *)(param_1 + 400)
                              );
          *(undefined8 *)(param_1 + 0x108) = uVar3;
          iVar2 = FUN_01847410(*(undefined8 *)(param_1 + 0x110));
          uVar3 = FUN_0184b910(*(undefined8 *)(param_1 + 0x110),iVar2 + -1);
          *(undefined8 *)(param_1 + 0x100) = uVar3;
          FUN_01847420(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x108));
          uVar3 = FUN_01847a00(&PTR_FUN_01843af8,1,0,7,0,0,0);
          FUN_01847420(*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x18),uVar3);
        }
      }
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

