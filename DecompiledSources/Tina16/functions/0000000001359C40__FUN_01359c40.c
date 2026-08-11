/* Ghidra address: 01359c40 */
/* Ghidra symbol: FUN_01359c40 */


void FUN_01359c40(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_01359af0(&local_38,param_1,0);
  uVar4 = FUN_0198d430(param_1);
  FUN_01a98210(uVar4,&local_48);
  FUN_00b95740(local_58,&local_48);
  cVar1 = FUN_00b95810(local_58,&local_38);
  if (cVar1 == '\0') {
    iVar2 = FUN_00b95910(&local_38);
    iVar3 = FUN_00b95910(&local_48);
    if (iVar2 <= iVar3) {
      iVar2 = FUN_00b95930(&local_38);
      iVar3 = FUN_00b95930(&local_48);
      if (iVar2 <= iVar3) {
        iVar2 = FUN_00b95910(&local_38);
        iVar2 = (local_48 + local_40) - iVar2;
        iVar3 = local_38 - iVar2 / 2;
        iVar2 = FUN_00b95930(&local_38,(longlong)iVar2 % 2 & 0xffffffff);
        local_34 = local_34 - ((local_44 + local_3c) - iVar2) / 2;
        if ((iVar3 == 0) && (local_34 == 0)) {
          return;
        }
        FUN_00b95860(&local_48,iVar3,local_34);
        FUN_01c74990(*(undefined8 *)PTR_DAT_02004e40,local_48,local_44,local_40,local_3c);
        return;
      }
    }
    FUN_01c750d0(*(undefined8 *)PTR_DAT_02004e40,local_38,local_34,local_30,local_2c);
  }
  return;
}

