//stamp:09248f4f9bd3e034
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				XML_DLG_SNAPSHOT = _T("LAYOUT:XML_DLG_SNAPSHOT");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * XML_DLG_SNAPSHOT;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _IMG{
			public:
			_IMG(){
			}
		}IMG;
		class _PNG{
			public:
			_PNG(){
				IDB_PNG_RECT = _T("PNG:IDB_PNG_RECT");
				IDB_PNG_ELLIPSE = _T("PNG:IDB_PNG_ELLIPSE");
				IDB_PNG_ARROW = _T("PNG:IDB_PNG_ARROW");
				IDB_PNG_WORD = _T("PNG:IDB_PNG_WORD");
				IDB_PNG_FINISH = _T("PNG:IDB_PNG_FINISH");
				IDB_PNG_SAVE = _T("PNG:IDB_PNG_SAVE");
				IDB_PNG_CANCEL = _T("PNG:IDB_PNG_CANCEL");
				IDB_PNG_DOODLE = _T("PNG:IDB_PNG_DOODLE");
				IDB_PNG_COPY = _T("PNG:IDB_PNG_COPY");
				IDB_PNG_MASK = _T("PNG:IDB_PNG_MASK");
				IDB_PNG_REVOKE = _T("PNG:IDB_PNG_REVOKE");
				IDB_PNG_SMALLDOT = _T("PNG:IDB_PNG_SMALLDOT");
				IDB_PNG_MIDDLEDOT = _T("PNG:IDB_PNG_MIDDLEDOT");
				IDB_PNG_BIGDOT = _T("PNG:IDB_PNG_BIGDOT");
				IDB_PNG_C1 = _T("PNG:IDB_PNG_C1");
				IDB_PNG_C2 = _T("PNG:IDB_PNG_C2");
				IDB_PNG_C3 = _T("PNG:IDB_PNG_C3");
				IDB_PNG_C4 = _T("PNG:IDB_PNG_C4");
				IDB_PNG_C5 = _T("PNG:IDB_PNG_C5");
				IDB_PNG_C6 = _T("PNG:IDB_PNG_C6");
				IDB_PNG_C7 = _T("PNG:IDB_PNG_C7");
				IDB_PNG_C8 = _T("PNG:IDB_PNG_C8");
				IDB_PNG_C9 = _T("PNG:IDB_PNG_C9");
				IDB_PNG_C10 = _T("PNG:IDB_PNG_C10");
				IDB_PNG_C11 = _T("PNG:IDB_PNG_C11");
				IDB_PNG_C12 = _T("PNG:IDB_PNG_C12");
				IDB_PNG_C13 = _T("PNG:IDB_PNG_C13");
				IDB_PNG_C14 = _T("PNG:IDB_PNG_C14");
				IDB_PNG_C15 = _T("PNG:IDB_PNG_C15");
				IDB_PNG_C16 = _T("PNG:IDB_PNG_C16");
				IDB_PNG_C17 = _T("PNG:IDB_PNG_C17");
				IDB_PNG_C18 = _T("PNG:IDB_PNG_C18");
				IDB_PNG_C19 = _T("PNG:IDB_PNG_C19");
				IDB_PNG_C20 = _T("PNG:IDB_PNG_C20");
				IDB_PNG_WORDSING = _T("PNG:IDB_PNG_WORDSING");
				IDB_PNG_CBXBTN = _T("PNG:IDB_PNG_CBXBTN");
				IDB_PNG_VLINE = _T("PNG:IDB_PNG_VLINE");
			}
			const TCHAR * IDB_PNG_RECT;
			const TCHAR * IDB_PNG_ELLIPSE;
			const TCHAR * IDB_PNG_ARROW;
			const TCHAR * IDB_PNG_WORD;
			const TCHAR * IDB_PNG_FINISH;
			const TCHAR * IDB_PNG_SAVE;
			const TCHAR * IDB_PNG_CANCEL;
			const TCHAR * IDB_PNG_DOODLE;
			const TCHAR * IDB_PNG_COPY;
			const TCHAR * IDB_PNG_MASK;
			const TCHAR * IDB_PNG_REVOKE;
			const TCHAR * IDB_PNG_SMALLDOT;
			const TCHAR * IDB_PNG_MIDDLEDOT;
			const TCHAR * IDB_PNG_BIGDOT;
			const TCHAR * IDB_PNG_C1;
			const TCHAR * IDB_PNG_C2;
			const TCHAR * IDB_PNG_C3;
			const TCHAR * IDB_PNG_C4;
			const TCHAR * IDB_PNG_C5;
			const TCHAR * IDB_PNG_C6;
			const TCHAR * IDB_PNG_C7;
			const TCHAR * IDB_PNG_C8;
			const TCHAR * IDB_PNG_C9;
			const TCHAR * IDB_PNG_C10;
			const TCHAR * IDB_PNG_C11;
			const TCHAR * IDB_PNG_C12;
			const TCHAR * IDB_PNG_C13;
			const TCHAR * IDB_PNG_C14;
			const TCHAR * IDB_PNG_C15;
			const TCHAR * IDB_PNG_C16;
			const TCHAR * IDB_PNG_C17;
			const TCHAR * IDB_PNG_C18;
			const TCHAR * IDB_PNG_C19;
			const TCHAR * IDB_PNG_C20;
			const TCHAR * IDB_PNG_WORDSING;
			const TCHAR * IDB_PNG_CBXBTN;
			const TCHAR * IDB_PNG_VLINE;
		}PNG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"attrbar",65553},
		{L"autohide",65536},
		{L"btn_arrow",65544},
		{L"btn_bigdot",65559},
		{L"btn_c1",65563},
		{L"btn_c10",65572},
		{L"btn_c11",65573},
		{L"btn_c12",65574},
		{L"btn_c13",65575},
		{L"btn_c14",65576},
		{L"btn_c15",65577},
		{L"btn_c16",65578},
		{L"btn_c17",65579},
		{L"btn_c18",65580},
		{L"btn_c19",65581},
		{L"btn_c2",65564},
		{L"btn_c20",65582},
		{L"btn_c3",65565},
		{L"btn_c4",65566},
		{L"btn_c5",65567},
		{L"btn_c6",65568},
		{L"btn_c7",65569},
		{L"btn_c8",65570},
		{L"btn_c9",65571},
		{L"btn_cancel",65551},
		{L"btn_copy",65549},
		{L"btn_doodle",65545},
		{L"btn_ellipse",65543},
		{L"btn_exit",65538},
		{L"btn_finish",65552},
		{L"btn_mask",65546},
		{L"btn_middledot",65558},
		{L"btn_rect",65542},
		{L"btn_revoke",65548},
		{L"btn_save",65550},
		{L"btn_smalldot",65557},
		{L"btn_start",65537},
		{L"btn_word",65547},
		{L"operate_bar",65541},
		{L"other_attrbar",65556},
		{L"selected_color",65562},
		{L"selected_window",65561},
		{L"snapshot",65539},
		{L"text_title",65540},
		{L"vline",65560},
		{L"word_attrbar",65554},
		{L"word_sign",65555}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			attrbar = namedXmlID[1].strName;
			autohide = namedXmlID[2].strName;
			btn_arrow = namedXmlID[3].strName;
			btn_bigdot = namedXmlID[4].strName;
			btn_c1 = namedXmlID[5].strName;
			btn_c10 = namedXmlID[6].strName;
			btn_c11 = namedXmlID[7].strName;
			btn_c12 = namedXmlID[8].strName;
			btn_c13 = namedXmlID[9].strName;
			btn_c14 = namedXmlID[10].strName;
			btn_c15 = namedXmlID[11].strName;
			btn_c16 = namedXmlID[12].strName;
			btn_c17 = namedXmlID[13].strName;
			btn_c18 = namedXmlID[14].strName;
			btn_c19 = namedXmlID[15].strName;
			btn_c2 = namedXmlID[16].strName;
			btn_c20 = namedXmlID[17].strName;
			btn_c3 = namedXmlID[18].strName;
			btn_c4 = namedXmlID[19].strName;
			btn_c5 = namedXmlID[20].strName;
			btn_c6 = namedXmlID[21].strName;
			btn_c7 = namedXmlID[22].strName;
			btn_c8 = namedXmlID[23].strName;
			btn_c9 = namedXmlID[24].strName;
			btn_cancel = namedXmlID[25].strName;
			btn_copy = namedXmlID[26].strName;
			btn_doodle = namedXmlID[27].strName;
			btn_ellipse = namedXmlID[28].strName;
			btn_exit = namedXmlID[29].strName;
			btn_finish = namedXmlID[30].strName;
			btn_mask = namedXmlID[31].strName;
			btn_middledot = namedXmlID[32].strName;
			btn_rect = namedXmlID[33].strName;
			btn_revoke = namedXmlID[34].strName;
			btn_save = namedXmlID[35].strName;
			btn_smalldot = namedXmlID[36].strName;
			btn_start = namedXmlID[37].strName;
			btn_word = namedXmlID[38].strName;
			operate_bar = namedXmlID[39].strName;
			other_attrbar = namedXmlID[40].strName;
			selected_color = namedXmlID[41].strName;
			selected_window = namedXmlID[42].strName;
			snapshot = namedXmlID[43].strName;
			text_title = namedXmlID[44].strName;
			vline = namedXmlID[45].strName;
			word_attrbar = namedXmlID[46].strName;
			word_sign = namedXmlID[47].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * attrbar;
		 const wchar_t * autohide;
		 const wchar_t * btn_arrow;
		 const wchar_t * btn_bigdot;
		 const wchar_t * btn_c1;
		 const wchar_t * btn_c10;
		 const wchar_t * btn_c11;
		 const wchar_t * btn_c12;
		 const wchar_t * btn_c13;
		 const wchar_t * btn_c14;
		 const wchar_t * btn_c15;
		 const wchar_t * btn_c16;
		 const wchar_t * btn_c17;
		 const wchar_t * btn_c18;
		 const wchar_t * btn_c19;
		 const wchar_t * btn_c2;
		 const wchar_t * btn_c20;
		 const wchar_t * btn_c3;
		 const wchar_t * btn_c4;
		 const wchar_t * btn_c5;
		 const wchar_t * btn_c6;
		 const wchar_t * btn_c7;
		 const wchar_t * btn_c8;
		 const wchar_t * btn_c9;
		 const wchar_t * btn_cancel;
		 const wchar_t * btn_copy;
		 const wchar_t * btn_doodle;
		 const wchar_t * btn_ellipse;
		 const wchar_t * btn_exit;
		 const wchar_t * btn_finish;
		 const wchar_t * btn_mask;
		 const wchar_t * btn_middledot;
		 const wchar_t * btn_rect;
		 const wchar_t * btn_revoke;
		 const wchar_t * btn_save;
		 const wchar_t * btn_smalldot;
		 const wchar_t * btn_start;
		 const wchar_t * btn_word;
		 const wchar_t * operate_bar;
		 const wchar_t * other_attrbar;
		 const wchar_t * selected_color;
		 const wchar_t * selected_window;
		 const wchar_t * snapshot;
		 const wchar_t * text_title;
		 const wchar_t * vline;
		 const wchar_t * word_attrbar;
		 const wchar_t * word_sign;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int attrbar	=	65553;
		const static int autohide	=	65536;
		const static int btn_arrow	=	65544;
		const static int btn_bigdot	=	65559;
		const static int btn_c1	=	65563;
		const static int btn_c10	=	65572;
		const static int btn_c11	=	65573;
		const static int btn_c12	=	65574;
		const static int btn_c13	=	65575;
		const static int btn_c14	=	65576;
		const static int btn_c15	=	65577;
		const static int btn_c16	=	65578;
		const static int btn_c17	=	65579;
		const static int btn_c18	=	65580;
		const static int btn_c19	=	65581;
		const static int btn_c2	=	65564;
		const static int btn_c20	=	65582;
		const static int btn_c3	=	65565;
		const static int btn_c4	=	65566;
		const static int btn_c5	=	65567;
		const static int btn_c6	=	65568;
		const static int btn_c7	=	65569;
		const static int btn_c8	=	65570;
		const static int btn_c9	=	65571;
		const static int btn_cancel	=	65551;
		const static int btn_copy	=	65549;
		const static int btn_doodle	=	65545;
		const static int btn_ellipse	=	65543;
		const static int btn_exit	=	65538;
		const static int btn_finish	=	65552;
		const static int btn_mask	=	65546;
		const static int btn_middledot	=	65558;
		const static int btn_rect	=	65542;
		const static int btn_revoke	=	65548;
		const static int btn_save	=	65550;
		const static int btn_smalldot	=	65557;
		const static int btn_start	=	65537;
		const static int btn_word	=	65547;
		const static int operate_bar	=	65541;
		const static int other_attrbar	=	65556;
		const static int selected_color	=	65562;
		const static int selected_window	=	65561;
		const static int snapshot	=	65539;
		const static int text_title	=	65540;
		const static int vline	=	65560;
		const static int word_attrbar	=	65554;
		const static int word_sign	=	65555;
		}id;

		class _string{
		public:
		const static int exit	=	0;
		const static int start	=	1;
		const static int title	=	2;
		const static int ver	=	3;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
