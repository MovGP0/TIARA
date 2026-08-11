/* Ghidra address: 00a62d70 */
/* Ghidra symbol: FUN_00a62d70 */


void FUN_00a62d70(longlong param_1,char param_2)

{
  longlong *plVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x28);
  uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  *(ushort *)(param_1 + 0x10) = uVar2;
  if (0xc < uVar2) {
    if (uVar2 == 0xd) {
      sVar3 = FUN_00a01990(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28));
      if (sVar3 == 10) {
        FUN_00a62d70(param_1,param_2);
      }
      else if (param_2 == '\0') {
        *(undefined2 *)(param_1 + 0x10) = 0x20;
      }
      else {
        *(undefined2 *)(param_1 + 0x10) = 10;
      }
    }
    else if ((uVar2 == 0x2f) &&
            (sVar3 = FUN_00a01990(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28)), sVar3 == 0x2a
            )) {
      do {
        sVar3 = *(short *)(param_1 + 0x10);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x28);
        sVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
        *(short *)(param_1 + 0x10) = sVar4;
        if (sVar4 == 0) {
          FUN_009ec440(&local_28,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20));
          FUN_00416ba0(local_20,L"Unterminated comment in style file: ",local_28);
          uVar5 = FUN_0044d490(&PTR_FUN_00a624c8,1,local_20[0]);
          FUN_004134c0(uVar5);
        }
      } while ((*(short *)(param_1 + 0x10) != 0x2f) || (sVar3 != 0x2a));
      *(undefined2 *)(param_1 + 0x10) = 0x20;
    }
    goto code_r0x00a62f25;
  }
  if (uVar2 != 0xc) {
    if (uVar2 == 9) {
      *(undefined2 *)(param_1 + 0x10) = 0x20;
      goto code_r0x00a62f25;
    }
    if (uVar2 != 10) goto code_r0x00a62f25;
  }
  if (param_2 == '\0') {
    *(undefined2 *)(param_1 + 0x10) = 0x20;
  }
  else {
    *(undefined2 *)(param_1 + 0x10) = 10;
  }
code_r0x00a62f25:
  FUN_00414560(&local_28,2);
  return;
}

