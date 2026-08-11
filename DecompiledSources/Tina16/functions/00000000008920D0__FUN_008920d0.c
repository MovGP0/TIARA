/* Ghidra address: 008920d0 */
/* Ghidra symbol: FUN_008920d0 */


longlong FUN_008920d0(longlong *param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
                     undefined1 param_5)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x1a8))
                    (param_1,*(undefined4 *)(&DAT_01e232e0 + (param_4 & 0xff) * 4),param_2,param_3,
                     param_5);
  if (lVar1 == -1) {
    FUN_0089ca80(param_1);
  }
  return lVar1;
}

