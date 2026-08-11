/* Ghidra address: 00bc9e50 */
/* Ghidra symbol: FUN_00bc9e50 */


undefined4 FUN_00bc9e50(undefined8 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [32];
  
  uVar8 = 0;
  FUN_00bc9db0(auStack_48);
  cVar1 = FUN_00bc5d10(param_1);
  uVar4 = uVar8;
  if (cVar1 != '\0') {
    if (param_1[0x32] == 0) {
      (**(code **)*param_1)(param_1,0x3ed);
    }
    else {
      iVar2 = FUN_00414d00(param_1[0x32]);
      if (param_2 < 1) {
        (**(code **)*param_1)(param_1,0x3ee);
      }
      else {
        uVar4 = 0;
        if (param_2 <= iVar2 + 1) {
          psVar6 = (short *)(param_1[0x32] + -2 + (longlong)param_2 * 2);
          psVar5 = psVar6;
          if (param_1[0x25] != 0) {
            do {
              psVar5 = (short *)FUN_00bc3cd0(psVar5,*(undefined2 *)param_1[0x25]);
              if (psVar5 != (short *)0x0) {
                iVar3 = FUN_00bc3ba0(psVar5,param_1[0x25],*(undefined4 *)(param_1 + 0x26));
                psVar7 = psVar5;
                if (iVar3 == 0) break;
                psVar5 = psVar5 + 1;
              }
              psVar7 = (short *)0x0;
            } while (psVar5 != (short *)0x0);
            if (psVar7 == (short *)0x0) {
              return 0;
            }
          }
          param_1[0x28] = param_1[0x32];
          param_1[0x29] = param_1[0x32] + (longlong)iVar2 * 2;
          *(undefined4 *)(param_1 + 0x24) = 0;
          if (*(short *)((longlong)param_1 + 0x126) == 0) {
            uVar4 = uVar8;
            if (*(short *)((longlong)param_1 + 0x124) == 0) {
              for (; (uVar4 = FUN_00bc9df0(auStack_48,psVar6), (char)uVar4 == '\0' && (*psVar6 != 0)
                     ); psVar6 = psVar6 + 1) {
                FUN_00bc9db0(auStack_48);
              }
            }
            else {
              do {
                psVar6 = (short *)FUN_00bc3cd0(psVar6,*(undefined2 *)((longlong)param_1 + 0x124));
                if (psVar6 != (short *)0x0) {
                  uVar4 = FUN_00bc9df0(auStack_48,psVar6);
                  if ((char)uVar4 != '\0') {
                    return uVar4;
                  }
                  FUN_00bc9db0(auStack_48);
                  psVar6 = psVar6 + 1;
                }
              } while (psVar6 != (short *)0x0);
            }
          }
          else {
            uVar4 = FUN_00bc9df0(auStack_48,psVar6);
          }
        }
      }
    }
  }
  return uVar4;
}

