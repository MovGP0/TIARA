/* Ghidra address: 0157f7f0 */
/* Ghidra symbol: FUN_0157f7f0 */


undefined1 FUN_0157f7f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 local_31;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  *param_3 = 0;
  local_31 = 0;
  iVar7 = 0;
  if (-1 < (int)(*(ushort *)(param_2 + 0x1a) - 2)) {
    iVar5 = *(ushort *)(param_2 + 0x1a) - 1;
    do {
      if (*(short *)(*(longlong *)(param_2 + 0x32) + (longlong)iVar7) == 0x7075) {
        uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x32) + (longlong)(iVar7 + 2));
        iVar5 = *(int *)(*(longlong *)(param_2 + 0x32) + (longlong)(iVar7 + 5));
        uVar2 = FUN_00634c80(0,0,0);
        uVar6 = 0;
        if (*(longlong *)(param_2 + 0x2a) != 0) {
          uVar6 = *(ulonglong *)(*(longlong *)(param_2 + 0x2a) + -8);
        }
        iVar3 = FUN_00634c80(uVar2,*(undefined8 *)(param_2 + 0x2a),uVar6 & 0xffffffff);
        if (iVar3 == iVar5) {
          uVar4 = FUN_0045ae90();
          FUN_0045aba0(uVar4,local_30,*(undefined8 *)(param_2 + 0x32),iVar7 + 9,uVar1 - 5);
          FUN_00414ad0(param_3,local_30[0]);
          local_31 = 1;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(local_30);
  return local_31;
}

