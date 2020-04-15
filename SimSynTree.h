#ifndef __SIM_SYNTREE__
#define __SIM_SYNTREE__
// This file was automatically generated by EbnfStudio; don't modify it!

#include <Simula/SimTokenType.h>
#include <Simula/SimToken.h>
#include <QList>

namespace Sim {

	struct SynTree {
		enum ParserRule {
			R_First = TT_Max + 1,
			R_Common_Base_conditional_statement,
			R_Common_Base_statement,
			R_activation_clause,
			R_activation_statement,
			R_activator,
			R_actual_parameter,
			R_actual_parameter_list,
			R_actual_parameter_part,
			R_adding_operator,
			R_and_sym_,
			R_array_declaration,
			R_array_list,
			R_array_segment,
			R_attribute_identifier,
			R_block,
			R_block_prefix,
			R_bound_pair,
			R_bound_pair_list,
			R_class_body,
			R_class_declaration,
			R_class_identifier,
			R_comment_,
			R_compound_tail,
			R_connection_part,
			R_connection_statement,
			R_declaration,
			R_equiv_sym_,
			R_equivalence_,
			R_expression,
			R_external_declaration,
			R_external_head,
			R_external_identifier,
			R_external_item,
			R_external_list,
			R_factor,
			R_final_operations_,
			R_for_clause,
			R_for_right_part,
			R_for_statement,
			R_formal_parameter,
			R_formal_parameter_list,
			R_formal_parameter_part,
			R_go_to_statement,
			R_identifier_list,
			R_if_clause,
			R_impl_sym_,
			R_implication,
			R_initial_operations_,
			R_label,
			R_local_object,
			R_logical_value,
			R_lower_bound,
			R_main_block,
			R_main_part,
			R_mode_part,
			R_module,
			R_multiplying_operator,
			R_name_part,
			R_not_sym_,
			R_object_for_list,
			R_object_for_list_element,
			R_object_generator,
			R_object_reference,
			R_or_sym_,
			R_otherwise_clause,
			R_parameter_delimiter,
			R_power_sym_,
			R_prefix,
			R_primary,
			R_procedure_body,
			R_procedure_declaration,
			R_procedure_heading,
			R_procedure_identifier,
			R_program,
			R_qualification,
			R_qualified_,
			R_reference_type,
			R_relation_,
			R_relational_operator,
			R_scheduling_clause,
			R_secondary,
			R_selector_,
			R_simple_expression_,
			R_simple_timing_clause,
			R_simple_variable,
			R_specification_part,
			R_specifier,
			R_split_body_,
			R_statement,
			R_subscript_expression,
			R_subscript_list,
			R_switch_declaration,
			R_switch_identifier,
			R_switch_list,
			R_term,
			R_timing_clause,
			R_type,
			R_type_declaration,
			R_type_list,
			R_unconditional_statement,
			R_unlabelled_basic_statement,
			R_unsigned_number,
			R_upper_bound,
			R_value_for_list,
			R_value_for_list_element,
			R_value_part,
			R_value_type,
			R_variable_identifier,
			R_virtual_part,
			R_when_clause,
			R_while_statement,
			R_Last
		};
		SynTree(quint16 r = Tok_Invalid, const Token& = Token() );
		SynTree(const Token& t ):d_tok(t){}
		~SynTree() { foreach(SynTree* n, d_children) delete n; }

		static const char* rToStr( quint16 r );

		Sim::Token d_tok;
		QList<SynTree*> d_children;
	};

}
#endif // __SIM_SYNTREE__