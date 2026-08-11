/* Ghidra address: 008e9de0 */
/* Ghidra symbol: FUN_008e9de0 */


undefined8 *
FUN_008e9de0(undefined8 param_1,undefined8 *param_2,ushort *param_3,int param_4,int *param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  if ((param_3 == (ushort *)0x0) || (param_4 < 1)) {
    *param_5 = 0;
    FUN_004144d0(param_2);
  }
  else {
    FUN_00415d10(param_2,param_4 * 4,0);
    puVar3 = (undefined1 *)*param_2;
    puVar4 = param_3 + param_4;
    if (param_3 < puVar4) {
      do {
        if ((ushort)(*param_3 + 0x2800) < 0x400) {
          if (param_3 == puVar4 + -1) {
            FUN_0041ddd0(local_20,PTR_PTR_02001350);
            puVar3 = (undefined1 *)FUN_0044d490(&PTR_FUN_00436080,1,local_20[0]);
            puVar4 = (ushort *)FUN_004134c0();
          }
          uVar1 = *param_3;
          puVar5 = param_3 + 1;
          uVar2 = *puVar5;
          if ((ushort)(uVar2 + 0x2400) < 0x301) {
            *puVar3 = (char)uVar2;
            puVar3[1] = (char)uVar1 * '\x04' + (char)(uVar2 - 0xdc00 >> 8);
            puVar3[2] = (char)(uVar1 - 0xd7c0 >> 6);
            puVar3[3] = 0;
            puVar5 = param_3 + 2;
            puVar3 = puVar3 + 4;
          }
          else {
            FUN_0041ddd0(&local_28,PTR_PTR_02001350);
            puVar3 = (undefined1 *)FUN_0044d490(&PTR_FUN_00436080,1,local_28);
            puVar4 = (ushort *)FUN_004134c0();
          }
        }
        else if ((ushort)(*param_3 + 0x2400) < 0x400) {
          FUN_0041ddd0(&local_30,PTR_PTR_02001f28);
          puVar3 = (undefined1 *)FUN_0044d490(&PTR_FUN_00436080,1,local_30);
          puVar4 = (ushort *)FUN_004134c0();
          puVar5 = param_3;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = (char)(*param_3 >> 8);
          puVar3[3] = (char)*param_3;
          puVar5 = param_3 + 1;
          puVar3 = puVar3 + 4;
        }
        param_3 = puVar5;
      } while (puVar5 < puVar4);
    }
    FUN_00415d10(param_2);
    *param_5 = param_4;
  }
  FUN_00414560(&local_30,3);
  return param_2;
}

